#include <iostream>
using namespace std;

int main() {
	// Информация о программе
	cout << "Программирование" << endl << "1 курс 2 семестр" << endl << "Контрольная работа № 1" << endl << "Вариант 1" << endl << endl;
	cout << "Задание 3" << endl;
	const int n = 4;
	int arrayA[n], arrayB[n];
	cout << "Введите количество очков, набранных каждой из команд группы A:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arrayA[i];
	}
	cout << "Введите количество очков, набранных каждой из команд группы B:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arrayB[i];
	}
	// сортировка массивов в порядке убывания
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arrayA[j] < arrayA[j + 1]) {
				int t = arrayA[j + 1];
				arrayA[j + 1] = arrayA[j];
				arrayA[j] = t;
			}
			if (arrayB[j] < arrayB[j + 1]) {
				int t = arrayB[j + 1];
				arrayB[j + 1] = arrayB[j];
				arrayB[j] = t;
			}
		}
	}
	int diffA = arrayA[0] - arrayA[n - 1], diffB = arrayB[0] - arrayB[n - 1]; // вычисление разницы в очках первой и последней команды в группах
	cout << "Группа A" << endl << "Отрыв клуба-лидера группы от клуба, занявшего 4 место, составляет " << diffA << " очков" << endl;
	cout << "Группа B" << endl << "Отрыв клуба-лидера группы от клуба, занявшего 4 место, составляет " << diffB << " очков" << endl;
	if (diffA > diffB) { // сравнение разностей максимальных и минимальных элементов в массивах A и B
		int diffArray[n - 1];
		for (int i = 0; i < n - 1; i++) {
			diffArray[i] = arrayA[i] - arrayA[i + 1]; // вычисление разностей соседних элементов
		}
		cout << "Группа A" << endl << "Разность очков";
		for (int i = 0; i < n - 2; i++) {
			cout << " между " << i + 1 << " и " << i + 2 << " местом - " << diffArray[i] << ",";
		}
		cout << " между " << n - 1 << " и " << n << " местом - " << diffArray[n - 2];
	}
	else {
		int diffArray[n - 1];
		for (int i = 0; i < n - 1; i++) {
			diffArray[i] = arrayB[i] - arrayB[i + 1]; // вычисление разностей соседних элементов
		}
		cout << "Группа B" << endl << "Разность очков";
		for (int i = 0; i < n - 2; i++) {
			cout << " между " << i + 1 << " и " << i + 2 << " местом - " << diffArray[i] << ",";
		}
		cout << " между " << n - 1 << " и " << n << " местом - " << diffArray[n - 2];		
	}
}
