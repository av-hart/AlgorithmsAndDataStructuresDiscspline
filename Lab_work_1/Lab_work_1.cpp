/* Гарт Анна Вікторівна, група ПС-24-1, варіант №4
 * Лабораторна робота №1. Лінійні списки: створення, перегляд */

#include <iostream>
#include <stdio.h> // підмикання бібліотеки stdio.h; y програмі використано функцію printf()
#include <stdlib.h> // підмикання бібліотеки stdlib.h; y програмі використано функцію system()
using namespace std;

struct Node {
    int data;        // поле для збереження значення (цілого числа)
    Node *next;      // покажчик на наступний елемент списку
};

int main() {
    Node* head = NULL; // Вказівник на початок списку
    Node* c;           // Поточний елемент списку
    Node* end = NULL;  // Вказівник на останній елемент списку
    
    int countPositive = 0;  // лічильник додатних чисел
    int countNegative = 0;  // лічильник від'ємних чисел
    int countZero = 0;      // лічильник нулів
    int totalCount = 0;     // загальна кількість елементів

    system("chcp 65001");
    system("cls");

    cout << "Введіть список чисел (для завершення введіть: \"999\" і натисніть Enter):" << endl;

    // Цикл введення та створення списку
    do {
        c = new struct Node;  // Створення нового елемента
        c->next = NULL;       // Поки що не має наступного
        cin >> c->data;       // Зчитування числа
        
        // Підрахунок статистики перед додаванням у список
        if (c->data > 0) {
            countPositive++;
        } else if (c->data < 0) {
            countNegative++;
        } else {
            countZero++;
        }
        totalCount++;

        // Додавання елемента до списку
        if (head == NULL) {
            head = c;
            end = c;
        } else {
            end->next = c;
            end = c;
        }
    } while (c->data != 999);  // Доки не введено -1000

    // Виведення списку на екран
    cout << "\nСписок чисел:" << endl;
    c = head;
    while (c != NULL) {
        cout << c->data << " ";
        c = c->next;
    }
    cout << endl;

    // Обчислення процентів
    double percentPositive = 0, percentNegative = 0, percentZero = 0;
    
    if (totalCount > 0) {
        percentPositive = (double) countPositive / totalCount * 100;
        percentNegative = (double) countNegative / totalCount * 100;
        percentZero = (double) countZero / totalCount * 100;
    }

    // Виведення статистики
    printf("\n=== Статистика ===");
    printf("\nЗагальна кількість елементів: %d", totalCount);
    printf("\nДодатних чисел: %d (%3.2f%)", countPositive, percentPositive);
    printf("\nВід'ємних чисел: %d (%3.2f%)", countNegative, percentNegative);
    printf("\nНулів: %d (%3.2f%)", countZero, percentZero);

    // Очищення пам'яті
    c = head;
    while (c != NULL) {
        Node* temp = c;
        c = c->next;
        delete temp;
    }

    printf ("\n\n");
    system("pause");
    return 0;
}