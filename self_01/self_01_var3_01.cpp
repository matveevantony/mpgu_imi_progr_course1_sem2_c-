#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    double secondNumber;
    string enterString;
    cout << "Введите, пожалуйста, целое число:" << endl;
    cin >> firstNumber;
    firstNumber -= 5;
    cout << "Результат: " << firstNumber << endl;
    cout << "Введите, пожалуйста, десятичную дробь:" << endl;
    cin >> secondNumber;
    secondNumber *= 2;
    cout << "Результат: " << secondNumber << endl;
    cout << "Введите, пожалуйста, строку:" << endl;
    cin >> enterString;
    cout << "Длина строки равна " << enterString.length() << endl;
}
