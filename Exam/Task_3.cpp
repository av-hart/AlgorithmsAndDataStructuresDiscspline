// Гарт Анна Вікторівна, група ПС-24-1, білет №4, завдання №3

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main() { 

    system("chcp 65001");
    system("cls");

    printf("Sum = ∑(1/k), ∀k ∈ ℤ, k ∈ (1; e^x), де x ∈ ℝ, x > 0\n");    
    
    double x;
    printf("\nEnter x (x > 0): ");
    scanf_s("%lf", &x);
    double upper = exp(x);      // e^x

    if (x > 0) {
        printf("\nSum = ∑(1/k), ∀k ∈ ℤ, k ∈ (1; %.3f)\n", upper);    
        double sum = 0.0;
        printf("\nSum = 0.500");    
        for (int k = 2; k <= (int)upper; k++) {
            sum += 1.0 / k;
            if (k != 2) {
                printf(" + %.3f", 1.0 / k);
            }
        }
        printf(" = %.3f\n", sum);
    }
    else {
        printf("\nПомилка. Введене значення x не задовольняє умову поставленої задачі");    
    }

    printf ("\n\n");
    system("pause"); 
    return 0; 
} 