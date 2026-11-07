#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main(void)
{
    char c;
    SetConsoleOutputCP(65001);
    printf("Введите символ: ");
    if (scanf(" %c", &c) != 1) return 1;
    switch (c) {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("Это цифра\n"); break;
    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            printf("Это буква\n");
        else printf("Неизвестный символ\n");
    }
    return 0;
}
