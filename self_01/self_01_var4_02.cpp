#include <iostream>
using namespace std;

int main() {
    string enterString;
    int enterNumber;
    double enterDigit;
    cout << "Введите строку:" << endl;
    cin >> enterString;
    cout << "Длина введёной строки - " << enterString.length() << endl;
    cout << "Введите целое число:" << endl;
    cin >> enterNumber;
    enterNumber /= 5;
    cout << "Результат уменьшения введённого числа в 5 раз равен " << enterNumber << endl;
    cout << "Введите десятичную дробь:" << endl;
    cin >> enterDigit;
    enterDigit += 7.4;
    cout << "Результат увеличения введённого числа на 7.4 равен " << enterDigit << endl;
}
