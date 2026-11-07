#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main(void)
{
    int god, den, mesyac, vek, ostatok, nomer;
    SetConsoleOutputCP(65001);
    printf("Введите год XXI века (2001-2100): ");
    if (scanf("%d", &god) != 1 || god < 2001 || god > 2100) {
        printf("Ошибка ввода года.\n");
        return 1;
    }
    den = 1;
    mesyac = 9;
    /* Алгоритм Зеллера: 0 - суббота, 1 - воскресенье, ... 6 - пятница */
    vek = god / 100;
    ostatok = god % 100;
    nomer = (den + 13 * (mesyac + 1) / 5 + ostatok + ostatok / 4 + vek / 4 + 5 * vek) % 7;
    printf("1 сентября %d года - ", god);
    switch (nomer) {
    case 0: printf("суббота\n"); break;
    case 1: printf("воскресенье\n"); break;
    case 2: printf("понедельник\n"); break;
    case 3: printf("вторник\n"); break;
    case 4: printf("среда\n"); break;
    case 5: printf("четверг\n"); break;
    case 6: printf("пятница\n"); break;
    }
    return 0;
}