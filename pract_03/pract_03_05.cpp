#include <iostream>
using namespace std;

int precondition() {
    int i = 10, summ = 0;
    while (i <= 99) {
        summ += i;
        i++;
    }
    cout << summ << endl;
    return 0;
}

int postcondition() {
    int i = 10, summ = 0;
    do {
        summ += i;
        i++;
    } while (i <= 99);
    cout << summ << endl;
    return 0;
}

int counter() {
    int summ = 0;
    for (int i = 10; i <= 99; i++) {
        summ += i;
    }
    cout << summ << endl;
    return 0;
}

int main() {
    int choice;
    cout << "Сумма всех двузначных чисел" << endl << "Выберите способ выполнения:" << endl << "1 - цикл с предусловием" << endl << "2 - цикл с постусловием" << endl << "3 - цикл со счётчиком" << endl << "Ваш выбор: ";
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
