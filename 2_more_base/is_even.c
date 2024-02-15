/*
В данном файле рассмотрим способы определения четности числа
*/

#include <stdio.h>

int simple_is_even(int x);
int is_even(int x);

int main() {
  int x;
  scanf("%d", &x);
  if (is_even(x)) {
    printf("Число %d четное\n", x);
  } else {
    printf("Число %d нечетное\n", x);
  }
}

/*
самый простой вариант определения четности
скорее всего он тебе придет в голову сразу
% - остаток от деления. При делении на 2 получишь либо 1 либо 0 (True или False)
однако в данном случае мы используем деление - целый набор операций
*/
int simple_is_even(int x) { return x % 2 == 0; }

/*
Ниже будет "продвинутый" способ определения четности числа
он заключается в том факте, что любое число (и не только) - набор 0 и 1
такой вид представления числа называется decimal
например 0 - 0х32 (32 0 подряд)
1 - 00000000 00000000 00000000 00000001
2 - 00000000 00000000 00000000 00000010
3 - 00000000 00000000 00000000 00000011
логика такого представления следующая:
в первый массив (ппервые 8 0 и 1) помешается информация о числе. например,
первый 0 или 1 определяют знак числа в последующие записывается само число. Как
это делается? индекс числа (считается справа налево (!)) является степенью
двойки то есть 00000000 00000000 00000000 00011101 - это 2^0*1 + 2^1*0 + 2^2*1 +
2^3*1 + 2^4*1 + 2^5*1 + 2^6*0... = = 1 + 0 + 4 + 8 + 16 + 32 + 0 ... = 61 Чем
это нам поможет? Для такого представления есть операторы смещения - >> и << они
смещают эти 0 и 1 влево и вправо на заданное кол-во символов Т.е. мы можем
сначала сместить число вправо на 31 символ, потом сместить его влево на 31
символ Это позволит нам оставить только 32 элемент (а точнее самый первый, с
индексом 0) и тем самым получить либо 0, либо 1 Почему это лучше? при делении
машина выполняет целый набор бинарных операций (смещений, сложений, вычитаний,
смещений) мы же обойдемся только 2 при это используем оператор отрицания !, так
как просто смещением мы получим определение нечетности, а не четности
*/
int is_even(int x) { return !(((x) << 31) >> 31); }