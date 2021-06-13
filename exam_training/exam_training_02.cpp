#include <iostream>
using namespace std;

int minDigit(int);

int main() {
	int someNumber;
	int count = 0;
	cout << "Введите целое число: ";
	cin >> someNumber;
	while (someNumber != 1) {
		count++;
		cout << "Минимальная цифра числа " << someNumber << " - " << minDigit(someNumber) << endl;
		cout << "Введите целое число: ";
		cin >> someNumber;
	}
	cout << "Количество введённых числел, не считая последней 1, составило " << count << endl;
	cout << "Завершение работы программы" << endl;
}

int minDigit(int number) {
	int min = number % 10;
	while (number != 0) {
		if (number % 10 < min) {
			min = number % 10;
		}
		number /= 10;
	}
	return min;
}
