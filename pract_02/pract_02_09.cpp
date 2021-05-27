#include <iostream>
using namespace std;

unsigned int precondition(unsigned int x) {
    unsigned int summ = 0;
    unsigned int i = 0;
    while (i < x) {
        i++;
        summ += i;
    }
    return summ;
}

unsigned int postcondition(unsigned int x) {
    unsigned int summ = 0;
    unsigned int i = 0;
    do {
        i++;
        summ += i;
    } while (i < x);
    return summ;
}

unsigned int counter(unsigned int x) {
    unsigned int summ = 0;
    unsigned int i = 0;
    for (i = 0; i <= x; i++) {
        summ += i;
    }
    return summ;
}

int main() {
    int choise;
    bool correctChoise = 1;
    unsigned int input, result = 0;
    cout << "Вычислить сумму чисел от 0 до ";
    cin >> input;
    cout << "Виды циклов:" << endl << "1 - с предусловием" << endl << "2 - с постусловием" << endl << "3 - со счётчиком" << endl << "Выберите виды цикла для выполнения: ";
    cin >> choise;
    switch (choise) {
    case 1: result = precondition(input);
        break;
    case 2: result = postcondition(input);
        break;
    case 3: result = counter(input);
        break;
    default: cout << "Неверно выбран алгоритм! Программа завершилась с ошибкой X(" << endl;
        correctChoise = 0;
        break;
    }
    if (correctChoise) {
        cout << "Сумма чисел от 0 до " << input << " равна " << result << endl;
    }
}
