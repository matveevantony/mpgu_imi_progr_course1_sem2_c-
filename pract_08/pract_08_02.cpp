#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int n = 3, m = 4;
	int matrix[n][m];
	int maxl = 0;
	cout << "Введите элементы матрицы A = || a(i,j) || размера " << n << "x" << m << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a(" << i + 1 << "," << j + 1<< ") = ";
			cin >> matrix[i][j];
			int t = abs(matrix[i][j]), c = 0;
			while (t > 0) {
				t = t / 10;
				c++;
			}
			if (matrix[i][j] >= 0) {
				if (c > maxl) {
					maxl = c;
				}
			}
			else {
				if (c + 1 > maxl) {
					maxl = c + 1;
				}
			}
		}
	}
	cout << "Матрица A:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(maxl + 1) << matrix[i][j];
		}
		cout << endl;
	}
}
