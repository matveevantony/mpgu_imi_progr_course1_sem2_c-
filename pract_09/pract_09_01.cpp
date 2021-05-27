#include <iostream>
using namespace std;

int multiply(int firstNumber, int secondNumber) {
	int multipliance = firstNumber * secondNumber;
	cout << "Произведение чисел " << firstNumber << " и " << secondNumber << " равно " << multipliance << endl;
	return multipliance;
}

int main() {
	int firstInput, secondInput;
	cout << "Давайте я посчитаю для вас произведение двух целых чисел. Введите их, пожалуйста!" << endl;
	cin >> firstInput >> secondInput;
	multiply(firstInput, secondInput);
	cout << "Давайте ещё разок" << endl;
	cin >> firstInput >> secondInput;
	multiply(firstInput,secondInput);
	cout << "Хочу ещё!" << endl;
	cin >> firstInput >> secondInput;
	multiply(firstInput,secondInput);
}
