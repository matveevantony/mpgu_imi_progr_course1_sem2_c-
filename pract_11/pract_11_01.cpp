#include <iostream>
using namespace std;

int averageOfDigits(int);

int main() {
	int firstNumber, secondNumber;
	cout << "Введите 2 целых числа:" << endl;
	cin >> firstNumber >> secondNumber;
	int &refFirstNumber = firstNumber;
	int &refSecondNumber = secondNumber;
	if (refFirstNumber < refSecondNumber) {
		refFirstNumber *= refFirstNumber;
		refSecondNumber = averageOfDigits(refSecondNumber);
	}
	else {
		refFirstNumber = averageOfDigits(refFirstNumber);
		refSecondNumber *= refSecondNumber;
	}
	cout << "Результат:" << endl << firstNumber << endl << secondNumber << endl;
}

int averageOfDigits(int number) { // функция для вычисления среднего арифметического цифр целого числа
	int summOfDigits = 0, countDigits = 0;
	while (number != 0) {
		summOfDigits += abs(number) % 10;
		countDigits++;
		number = number / 10;
	}
	return summOfDigits / countDigits;
}
