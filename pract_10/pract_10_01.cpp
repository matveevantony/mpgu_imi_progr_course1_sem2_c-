#include <iostream>
using namespace std;

int main() {
	int firstNumber, secondNumber;
	cout << "Введите 2 целых числа:" << endl;
	cin >> firstNumber >> secondNumber;
	int *pfirstNumber = &firstNumber;
	int *psecondNumber = &secondNumber;
	if (*pfirstNumber <= *psecondNumber) {
		*psecondNumber = *pfirstNumber + 1;
		*pfirstNumber *= 2;
	}
	else {
		*pfirstNumber += 1;
		*psecondNumber *= 2;
	}
	cout << "Результат:" << endl << firstNumber << endl << secondNumber << endl;
}
