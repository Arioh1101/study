#include <stdio.h>

void table(int x);

int main() {
  int a;  //переменная для ввода числа пользователем
  printf(
      "Привет! Введи целое число от 1 до 10 и я выведу для него таблицу "
      "умножения \n");
  if (scanf("%d", &a) == 0) {
    printf("Нужно ввести целое число от 1 до 10\n");
    return 1;
  };
  table(a);
  return 0;
}

void table(int x) {  //выводит таблицу умножения
  for (int i = 1; i <= 10; i++) {
    // int z = x * i;
    printf("%d * %d = %d\n", x, i, x * i);
    // printf("%d", x);
    // printf(" * %d", i);
    // printf(" = ");
    // printf("%d \n",z);
  }
}
