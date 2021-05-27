#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Информация о программе
	cout << "Программирование" << endl << "1 курс 2 семестр" << endl << "Контрольная работа № 1" << endl << "Вариант 1" << endl << endl;
	cout << "Задание 2" << endl;
	const int n = 10; // константа размера массива
	double array[n]; // объявление массива
	cout << "Введите значения курса доллара за 10 дней (по одному значению в строке):" << endl;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	double diff = abs(array[0] - array[n - 1]); // вычисление разности курсов в первый и последний день
	cout << "Разница курсов в первый и последний день: " << diff << endl;
	int rise = 0, set = 0; // объявление переменных для подсчёта дней повышения и понижения курса
	for (int i = 1; i < n; i++) {
		if (array[i] > array[i - 1]) {
			rise++;
		}
		else {
			if (array[i] < array[i - 1]) {
				set++;
			}
		}
	}
	cout << "За прошедшие 10 дней курс Доллара повышался " << rise << " раз и понижался " << set << " раз" << endl;
}
