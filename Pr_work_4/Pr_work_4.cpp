/* Гарт Анна Вікторівна, група ПС-24-1, варіант №4
 * Практична робота №4. Розробка і реалізація алгоритмів розгалужених 
 * процесів з послідовною перевіркою умов */

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main() { 
    double a, b, x, y;

    system("chcp 65001");
    system("cls");

    printf ("\nОбчислення значення функції\n\n"); 

    printf ("       { sqrt(b*x + 3),    при x є (-2; 10)      (1)\n");
    printf ("f(x) = { |x^2 - a*x + 7|,  при x = 10            (2)\n");
    printf ("       { cos(x - 1),       при x є (10; +oo)     (3)\n\n");
     
    printf ("Введіть параметри a, b: "); 
    scanf_s ("%lf%lf", &a, &b); 
    printf ("Введіть значення x: "); 
    scanf_s("%lf", &x);  

    // Розгалуження (1)
    if (x > -2 && x < 10) {
        printf ("\nОбчислення за розгалуженням (1):\n");
        if (b*x >= -3) {
            y = sqrt(b*x+3);
            printf("f(%4.2f) = sqrt( (%4.2f)*(%4.2f) + 3) = sqrt(%4.2f + 3) = sqrt(%4.2f) = %6.3f\n", x, b, x, b*x, (b*x+3), y);
        }
        else {
            y = sqrt(-(b*x+3)); 
            printf("f(%4.2f) = sqrt( (%4.2f)*(%4.2f) + 3) = sqrt(%4.2f + 3) = sqrt(%4.2f) = %6.3f * i\n", x, b, x, b*x, (b*x+3), y);
        }
    } 
    // Розгалуження (2)
    else if (x == 10) {
        printf ("\nОбчислення за розгалуженням (2):\n");
        y = x*x-a*x+7;
        if (y >= 0) {
            printf("f(10) = |10^2 - (%4.2f)*10 + 7| = |100 - (%4.2f) + 7| = %6.3f\n", a, a*x, y);
        } 
        else {
            printf("f(10) = |10^2 - (%4.2f)*10 + 7| = |100 - (%4.2f) + 7| = |%6.3f| = %6.3f\n", a, a*x, y, y*(-1));
        }
    } 
    // Розгалуження (3)
    else if (x > 10) {
        printf ("\nОбчислення за розгалуженням (3):\n");
        y = cos(x-1);
        printf("f(%4.2f) = cos(%4.2f - 1) = cos(%4.2f) = %6.3f\n", x, x, (x-1), y);
    }  
    else { 
        printf ("\nФункція f(x) не визначена у точці x = %4.2f", x);
    } 

    printf ("\n\n");
    system("pause"); 
    return 0; 
} 