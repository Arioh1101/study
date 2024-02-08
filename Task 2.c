#include <stdio.h>


void summ(float x, float y) { //функция суммы двух чисел
    float z = x + y;
    printf("сумма чисел равна %f\n", z);
}

void diff(float x, float y) { //функция разностидвух чисел
    float z = x - y;
    printf("разность чисел равна %f\n", z);
}

void prod(float x, float y) { //функция произведения двух чисел
    float z = x * y;
    printf("произведение чисел равно %f\n", z);
}


void div(float x, float y) { //функция деления двух чисел
    float z = x / y;
    if (y == 0) printf("на 0 делить нельзя");
    else printf("частное чисел равно %f\n", z);
}

int main() {
    printf("Привет! Эта программа выводит сумму, разность, произведение и частное двух чисел\n");
    float a,b; //переменные для чисел, которые введет пользователь
    int choice; //переменная для выбора действия пользователем
    printf("Введи первое число\n");
    scanf("%f",&a);
    printf("Введи второе число\n");
    scanf("%f",&b);
    printf("Какое действие над числами ты хотел бы совершить?\n");
    printf("Выбери пункт:\n1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\n");
    scanf("%d",&choice);
    if (choice == 1) summ(a,b);
    else if (choice == 2) diff(a,b);
    else if (choice == 3) prod(a,b);
    else if (choice == 4) div(a,b);
    else printf("Такого пункта нет");
    return 0;
}

