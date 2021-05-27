#include <iostream>
using namespace std;

void recount(int *,int *);

int main() {
	int firstNumber, secondNumber;
	cout << "Введите 2 целых числа:" << endl;
	cin >> firstNumber >> secondNumber;
	recount(&firstNumber,&secondNumber);
	cout << "Результат:" << endl << firstNumber << endl << secondNumber << endl;
}

void recount(int *a, int *b) {
	if (*a >= *b) {
		*a *= 5;
		*b -= 5;
	}
	else {
		*a -= 5;
		*b *= 5;
	}
}
