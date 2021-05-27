#include <iostream>
using namespace std;

int main() {
    int result = 0, firstNumber, secondNumber, operation;
    bool correctOperation = 1;
    cout << "Вас приветствует целочисленный калькулятор!" << endl << "Введите первое число: ";
    cin >> firstNumber;
    cout << "Введите второе число: ";
    cin >> secondNumber;
    cout << "Возможные операции:" << endl << "1 - сложение" << endl << "2 - вычитание" << endl << "3 - умножение" << endl << "4 - целочисленное деление" << endl << "5 - остаток от целочисленного деления" << endl << "Выберите операцию: ";
    cin >> operation;
    // Начинается ветвление
    switch (operation) {
    case 1: result = firstNumber + secondNumber;
        break;
    case 2: result = firstNumber - secondNumber;
        break;
    case 3: result = firstNumber * secondNumber;
        break;
    case 4: result = firstNumber / secondNumber;
        break;
    case 5: result = firstNumber % secondNumber;
        break;
    default: cout << "Неверно выбрана операция! Программа закрывается..." << endl;
        correctOperation = 0;
        break;
    }
    if (correctOperation) cout << "Результат: " << result << endl;
}
