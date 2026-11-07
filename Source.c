#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(void)
{
    float x, y;
    char c;
    SetConsoleOutputCP(65001);
    printf("Введите пример (например, 5+3): ");
    if (scanf("%f %c %f", &x, &c, &y) != 3) {
        printf("Ошибка ввода\n"); return 1;
    }
    switch (c) {
    case '+': printf("Результат = %f\n", x + y); break;
    case '-': printf("Результат = %f\n", x - y); break;
    case '*': printf("Результат = %f\n", x * y); break;
    case '/':
        if (y != 0) printf("Результат = %f\n", x / y);
        else printf("На ноль делить нельзя\n");
        break;
    case '^': printf("Результат = %f\n", pow(x, y)); break;
    default: printf("Неизвестная операция\n");
    }
    return 0;
}
