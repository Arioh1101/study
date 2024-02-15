#include "whiles.h"

void main() {
  printf("Привет, я твой помошник по выводу уроков!\n");
  printf(
      "Выбери пункт:\n1 - Вывод Hello world!\n2 - Вывод числа 5, записанного в "
      "переменную\n3 - демонстрация цикла\n4 - демонстрация ветвления\n5 - "
      "выход\n");
  int choice = 0;
  scanf("%d", &choice);
  while (choice != 5) {
    if (choice == 1)
      hello();
    else if (choice == 2)
      number();
    else if (choice == 3)
      cycle();
    else if (choice == 4)
      if_else();
    else
      printf("Неизвестное значение\n");
  }
}

void hello() { printf("Hello world!\n"); }

void number() {
  int a = 5;
  printf("%d\n", a);
}

void cycle() {
  for (int i = 0; i <= 10; i++) {
    printf("%d\n", i);
  }
}

void if_else() {
  int age;
  printf("Enter a number: ");
  scanf("%d", &age);
  if (age < 18) {
    printf("Children\n");
  } else if (age < 65) {
    printf("Adults\n");
  } else {
    printf("Seniors\n");
  }
}