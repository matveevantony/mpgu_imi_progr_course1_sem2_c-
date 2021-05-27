#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	srand(time(NULL));
	int n, m;
	cout << "Введите размер матрицы (n x m):" << endl << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	int matrix[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
	cout << "Матрица:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(2) << matrix[i][j];
		}
		cout << endl;
	}
	int minside;
	if (n <= m) {
		minside = n;
	}
	else {
		minside = m;
	}
	int summ = 0;
	for (int i = 0; i < minside; i++) {
		summ += matrix[i][i];
	}
	cout << "Сумма элементов, лежащих на главной диагонали, равна " << summ << endl;
}
