#include <stdio.h>

void table(int x) { //выводит таблицу умножения
    for (int i = 1; i <= 10; i++) {
        int z = x * i;
        printf("%d", x);
        printf(" * %d", i);
        printf(" = ");
        printf("%d \n",z);
    }
}


int main() {
    int a; //переменная для ввода числа пользователем
    printf("Привет! Введи целое число от 1 до 10 и я выведу для него таблицу умножения \n");
    scanf("%d", &a);
    if (a < 1) printf ("Число должно быть в диапазоне от 1 до 10");
    else if (a > 10) printf ("Число должно быть в диапазоне от 1 до 10");
    else table (a);
    return 0;
}

