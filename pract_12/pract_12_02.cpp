#include <iostream>
using namespace std;

int main(){
	int someNumber;
	cout << "Введите целое число: ";
	cin >> someNumber;
	if (someNumber <= 100) {
		cout << "Ошибка! Введено число, меньшее 100" << endl;
		return 0;
	}
	someNumber = abs(someNumber);
	int summDigit = 0, countDigit = 0;
	while (someNumber != 0) {
		summDigit += someNumber % 10;
		countDigit++;
		someNumber /= 10;
	}
	double averageDigits = (double) summDigit / countDigit;
	cout << "Среднее арифметическое цифр числа равно " << averageDigits << endl;
}
