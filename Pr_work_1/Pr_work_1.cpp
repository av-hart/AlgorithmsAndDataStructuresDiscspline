/* Гарт Анна Вікторівна, група ПС-24-1
 * Практична робота №1. Основи роботи в середовищі Visual Studio */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define N 255
using namespace std;

int main () {
    char st[N];
    printf("\n\n\n\t\t\t Pryvit! Tse -- C\n\n");
    printf(" Yak tebe zvaty?\n ");
    cin.getline(st, N); // gets(st) не працює, бо це застаріла функція
    system("color 0B");
    printf(" Rryvit, %s\a!", st);
    getchar();
    system("color 90");
    printf(" Bazhaiu uspikhiv!\n");

    getchar();
    return 0;
}