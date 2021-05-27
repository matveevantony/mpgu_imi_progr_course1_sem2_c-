#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int n = 4;
	int matrix[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 1) {
				matrix[i][j] = 0;
			}
			else {
				matrix[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(2) << matrix[i][j];
		}
		cout << endl;
	}
}
