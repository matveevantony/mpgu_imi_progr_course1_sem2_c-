#include <iostream>
using namespace std;

int main(){
	int someNumber;
	cout << "Введите целое число: ";
	cin >> someNumber;
	someNumber = abs(someNumber);
	cout << "Чётные цифры числа:" << endl;
	int sumEvenDigit = 0;
	while (someNumber != 0) {
		int digit = someNumber % 10;
		if (digit % 2 == 0) {
			cout << digit << " ";
			sumEvenDigit += digit;
		}
		someNumber /= 10;
	}
	cout << endl << "Сумма чётных цифр числа равна " << sumEvenDigit << endl;
}
