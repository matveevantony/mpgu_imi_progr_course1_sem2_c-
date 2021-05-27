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
	int maxlineel[n];
	for (int i = 0; i < n; i++) {
		maxlineel[i] = matrix[i][0];
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > maxlineel[i]) {
				maxlineel[i] = matrix[i][j];
			}
		}
	}
	cout << "Максимальные элементы строк:" << endl;
	for (int i = 0; i < n; i++) {
		cout << maxlineel[i] << endl;
	}
}
