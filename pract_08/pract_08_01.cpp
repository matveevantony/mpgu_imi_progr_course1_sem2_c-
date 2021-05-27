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
	for (int i=0; i < n; i++) {
		for (int j=0; j < m; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
	for (int i=0; i < n; i++) {
		for (int j=0; j < m; j++) {
			cout << setw (2) << matrix[i][j];
		}
		cout << endl;
	}
}
