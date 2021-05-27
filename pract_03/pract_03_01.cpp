#include <iostream>
using namespace std;

int precondition() {
    int i = 5;
    while (i <= 10) {
        cout << i * i << " ";
        i++;
    }
    cout << endl;
    return 0;
}

int postcondition() {
    int i = 5;
    do {
        cout << i * i << " ";
        i++;
    } while (i <= 10);
    cout << endl;
    return 0;
}

int counter() {
    for (int i = 5; i <= 10; i++) {
        cout << i * i << " ";
    }
    cout << endl;
    return 0;
}

int main() {
    int choice;
    cout << "Квадраты чисел от 5 до 10" << endl << "Выберите способ выполнения:" << endl << "1 - цикл с предусловием" << endl << "2 - цикл с постусловием" << endl << "3 - цикл со счётчиком" << endl << "Ваш выбор: ";
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
