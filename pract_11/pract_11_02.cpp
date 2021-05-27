#include <iostream>
using namespace std;

int firstDigit(int);
void calcByValue(int, int);
void calcByReference(int &, int &);
void calcByPointer(int *, int *);

int main() {
	int someNumber, anotherNumber;
	cout << "Введите 2 целых числа:" << endl;
	cin >> someNumber >> anotherNumber;
	calcByValue(someNumber, anotherNumber);
	cout << "Вернулись значения: " << someNumber << " " << anotherNumber << endl;
	calcByReference(someNumber,anotherNumber);
	cout << "Вернулись значения: " << someNumber << " " << anotherNumber << endl;
	calcByPointer(&someNumber, &anotherNumber);
	cout << "Вернулись значения: " << someNumber << " " << anotherNumber << endl;
}

int firstDigit(int number) {
	int currentDigit;
	while (number != 0) {
		currentDigit = abs(number) % 10;
		number = number / 10;
	}
	return currentDigit;
}

void calcByValue(int firstNumber, int secondNumber) {
	if (firstNumber > secondNumber) {
		secondNumber -= firstDigit(firstNumber);
		firstNumber *= firstNumber * firstNumber;
	}
	else {
		firstNumber -= firstDigit(secondNumber);
		secondNumber *= secondNumber * secondNumber;
	}
	cout << "Передача в функцию по значению: " << firstNumber << " " << secondNumber << endl;
}

void calcByReference(int &refFirstNumber, int &refSecondNumber) {
	if (refFirstNumber > refSecondNumber) {
		refSecondNumber -= firstDigit(refFirstNumber);
		refFirstNumber *= refFirstNumber * refFirstNumber;
	}
	else {
		refFirstNumber -= firstDigit(refSecondNumber);
		refSecondNumber *= refSecondNumber * refSecondNumber;
	}
	cout << "Передача в функцию по ссылке: " << refFirstNumber << " " << refSecondNumber << endl;
}

void calcByPointer(int *pFirstNumber, int *pSecondNumber) {
	if (*pFirstNumber > *pSecondNumber) {
		*pSecondNumber -= firstDigit(*pSecondNumber);
		*pFirstNumber *= *pFirstNumber * *pFirstNumber;
	}
	else {
		*pFirstNumber -= firstDigit(*pSecondNumber);
		*pSecondNumber *= *pSecondNumber * *pSecondNumber;
	}
	cout << "Передача в функцию по указателю: " << *pFirstNumber << " " << *pSecondNumber << endl;
}
