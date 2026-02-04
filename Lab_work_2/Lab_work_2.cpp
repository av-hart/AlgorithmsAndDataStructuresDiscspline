/* Гарт Анна Вікторівна, група ПС-24-1, варіант №4
 * Лабораторна робота №2. Черга і стек */

#include <iostream> 
#include <stack>   // для роботи зі стеком 
#include <queue>   // для роботи з чергою 
using namespace std; 

// Виведення черги
void PrintQueue(queue<int> q) {
    cout << "Черга: ";
    if (q.empty()) {
        cout << "порожня\n";
        return;
    }
    else {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << "\n";
    }
}

// Виведення стеку
void PrintStack(stack<int> st) {
    cout << "Стек: ";
    if (st.empty()) {
        cout << "порожній\n";
        return;
    }
    else {
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
}

int main() { 

    stack<int> st; // стек
    queue<int> q;  // черга

    system("chcp 65001");
    system("cls");
    
    for (int i = 3; i <= 55; i++) { 
        q.push(i);      // додаємо цілі числа від 3 до 55 у чергу 
        if (i%2 != 0) {
            st.push(i); // додаємо цілі непарні числа від 3 до 55 у стек
        }
    }
    cout << "\nДодавання цілих чисел від 3 до 55 у чергу" << endl;
    PrintQueue(q);
    cout << "\nДодавання цілих непарних чисел від 3 до 55 у стек" << endl;
    PrintStack(st);

    // Переносимо всі числа з черги у стек по одному
    cout << "\nПеренесення всіх чисел з черги у стек по одному" << endl;
    while (!q.empty()) { 
        st.push(q.front()); // додаємо перший елемент черги у стек 
        q.pop();            // видаляємо його з черги 
    } 
    PrintQueue(q);
    PrintStack(st);

    // Знімаємо всі числа зі стеку по одному і виводимо ті, що кратні 3
    cout << "\nЗнімання всіх чисел зі стеку по одному і виведення тих, що кратні 3:" << endl;
    while (!st.empty()) {
        if (st.top()%3 == 0) {
            cout << st.top() << " "; // виводимо верхній елемент стека 
        }
        st.pop();                    // видаляємо його зі стека 
    }
    cout << "\n";
    PrintStack(st);

    cout << "\n" << endl;
    system("pause");
    return 0;
}