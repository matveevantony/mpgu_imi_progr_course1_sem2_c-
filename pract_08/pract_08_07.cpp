#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	srand(time(NULL));
	int n1, m1, n2, m2;
	cout << "Введите размер матрицы A (n1 x m1):" << endl << "n1 = ";
	cin >> n1;
	cout << "m1 = ";
	cin >> m1;
	int matrixA[n1][m1];
	cout << "Введите размер матрицы B (n2 x m2):" << endl << "n2 = ";
	cin >> n2;
	cout << "m2 = ";
	cin >> m2;
	int matrixB[n2][m2];
	if (n1 == n2 && m1 == m2) {
		const int n = n1, m = m1;
		int matrixSumm[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrixA[i][j] = random() % 10;
				matrixB[i][j] = random() % 10;
			}
		}
		cout << "Матрица A:" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << setw(2) << matrixA[i][j];
			}
			cout << endl;
		}
		cout << "Матрица B:" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << setw(2) << matrixB[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrixSumm[i][j] = matrixA[i][j] + matrixB[i][j];
			}
		}
		cout << "Сумма матриц A и B:" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << setw(3) << matrixSumm[i][j];
			}
			cout << endl;
		}
	}
	else {
		cout << "Сложить матрицы A и B невозможно: их размеры не совпадают";
	}
}
