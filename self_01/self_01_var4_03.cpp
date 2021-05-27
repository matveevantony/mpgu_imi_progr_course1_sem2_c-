#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cout << "Введите два целых числа:" << endl;
    cin >> firstNumber >> secondNumber;
    if (firstNumber >= secondNumber) {
        firstNumber *= 2;
    }
    else {
        secondNumber *= 2;
    }
    cout << "Результат: " << firstNumber << " " << secondNumber << endl;
}
