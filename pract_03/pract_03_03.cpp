#include <iostream>
using namespace std;

int precondition() {
    int i = 5;
    while (i <= 50) {
        if (i % 5 == 0 && i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}

int postcondition() {
    int i = 5;
    do {
        if (i % 5 == 0 && i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= 50);
    cout << endl;
    return 0;
}

int counter() {
    for (int i = 5; i <= 50; i++) {
        if (i % 5 == 0 && i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

int main() {
    int choice;
    cout << "Числа из диапозона [5,50], делящиеся на 5 и не делящиеся на 2" << endl << "Выберите способ выполнения:" << endl << "1 - цикл с предусловием" << endl << "2 - цикл с постусловием" << endl << "3 - цикл со счётчиком" << endl << "Ваш выбор: ";
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
