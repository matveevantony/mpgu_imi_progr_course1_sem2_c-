#include <iostream>
using namespace std;

int countDigits(int);
int summDigits(int);

int main() {
	int someNumber;
	cout << "Введите целое число: ";
	cin >> someNumber;
	while (someNumber != 5) {
		cout << "Количество цифр в числе " << someNumber << " равно " << countDigits(someNumber) << endl;
		cout << "Сумма цифр числа " << someNumber << " равна " << summDigits(someNumber) << endl;
		cout << "Введите целое число: ";
		cin >> someNumber;
	}
	cout << "Завершение работы программы" << endl;
}

int countDigits(int number) {
	number = abs(number);
	int count = 0;
	while (number != 0) {
		count++;
		number /= 10;
	}
	return count;
}

int summDigits(int number) {
	number = abs(number);
	int summ = 0;
	while (number != 0) {
		summ += number % 10;
		number /= 10;
	}
	return summ;
}
