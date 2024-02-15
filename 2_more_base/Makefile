CC = gcc
CC_FLAGS=-g -Wall -Werror -Wextra -std=c11 

all: clean clang is_even ternar factorial whiles

is_even:
	$(CC) $(CC_FLAGS) is_even.c -o is_even

ternar:
	$(CC) $(CC_FLAGS) ternar.c -o ternar

factorial:
	$(CC) $(CC_FLAGS) factorial.c -o factorial

whiles:
	$(CC) $(CC_FLAGS) whiles.* -o whiles

clang:
	cp ../linters/.clang-format .
	clang-format -n *.c
	rm -f .clang-format

clang-format:
	cp ../linters/.clang-format .
	clang-format -i *.c
	rm -f .clang-format

clean:
	rm -f is_even ternar