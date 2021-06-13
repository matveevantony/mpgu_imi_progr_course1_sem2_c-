#include <iostream>
using namespace std;

int countDigits(int);

int main() {
	int summOfNumbers = 0, countNumbers = 0;
	int someNumber;
	cout << "Введите целое число: ";
	cin >> someNumber;
	while (someNumber != 3) {
		countNumbers++;
		summOfNumbers += someNumber;
		cout << "Количество цифр в числе " << someNumber << " равно " << countDigits(someNumber) << endl;
		cout << "Введите целое число: ";
		cin >> someNumber;
	}
	double averageOfNumbers = (double) summOfNumbers / countNumbers;
	cout << "Среднее арифметическое всех введённых чисел, не считая последней 3, равно " << averageOfNumbers << endl;
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
