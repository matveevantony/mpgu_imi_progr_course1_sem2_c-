#include <iostream>
using namespace std;

int precondition() {
    int i = 3;
    while (i <= 45) {
        if (i % 7 == 1 || i % 7 == 2) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}

int postcondition() {
    int i = 3;
    do {
        if (i % 7 == 1 || i % 7 == 2) {
            cout << i << " ";
        }
        i++;
    } while (i <= 45);
    cout << endl;
    return 0;
}

int counter() {
    for (int i = 3; i <= 45; i++) {
        if (i % 7 == 1 || i % 7 == 2) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

int main() {
    int choice;
    cout << "Числа из диапозона [3,45], делящиеся на 7 с остатками 1 и 2" << endl << "Выберите способ выполнения:" << endl << "1 - цикл с предусловием" << endl << "2 - цикл с постусловием" << endl << "3 - цикл со счётчиком" << endl << "Ваш выбор: ";
    cin >> choice;
    switch (choice) {
        case 1 : precondition();
            break;
        case 2 : postcondition();
            break;
        case 3 : counter();
            break;
        default : cout << "Вы ввели недопустимое значение!" << endl;
            break;
    }
}
