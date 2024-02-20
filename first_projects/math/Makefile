# for MacOS 
# CC_FLAGS = -Wall -Wextra -Werror -std=c11
# CC_FLAGS_TESTS = -Wall -Wextra -Werror -std=c11 -I /usr/local/include

# # for Linux
CC_FLAGS = -Wall -Wextra -Werror -std=c11

# for MacOS 
# CHECK_FLAGS = -L/usr/local/Cellar/check/0.15.2/lib -lcheck -lm -lpthread

# # for Linux
CHECK_FLAGS = -lcheck -lm -lpthread -lrt -lsubunit

all: math.a test gcov_report

math.a: math.c 
	gcc $(CC_FLAGS) -c math.c 
	ar rcs math.a math.o
	rm math.o

math: math.c
#	gcc $(CC_FLAGS_TESTS) math.c -o math -L. -l math
	gcc $(CC_FLAGS_TESTS) math.c -o math math.a

test: clean math.c test_math.c
	gcc $(CC_FLAGS_TESTS) math.c test_math.c tests/*.c -o unit_tests $(CHECK_FLAGS)

gcov_report: clean
	gcc $(CC_FLAGS_TESTS) math.c test_math.c tests/*.c -o gcov_tests -fprofile-arcs -ftest-coverage $(CHECK_FLAGS)
	./gcov_tests
	lcov -t "gcov_tests" -o gcov_tests.info -c -d .
	genhtml -o report gcov_tests.info
# 	Для MacOS
#	open report/index.html
#	Для Linux
	xdg-open report/index.html

clean:
	rm -rf ./math gcov_tests report ./unit_tests
	rm -f *.o *.gch math.a
	rm -rf *.gcno *.gcda *.info

clang:
	cp ../../linters/.clang-format .
	clang-format -i {*.c,*.h} tests/*.c
	rm .clang-format

clang_check:
	cp ../../linters/.clang-format .
	clang-format -n {*.c,*.h} tests/*.c
	rm .clang-format

rebuild: clean all