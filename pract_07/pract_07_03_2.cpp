#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
	srand(time(NULL));
	const int n = 15, a = 0, b = 10;
	int arrayOfNums[n];
	for (int i = 0; i < n; i++) {
		arrayOfNums[i] = rand() % (b - a + 1);
	}
	for (int i = 0; i < n; i++) {
		cout << setw(4) << arrayOfNums[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			arrayOfNums[i] = pow(arrayOfNums[i], 2);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << setw(4) << arrayOfNums[i];
	}
	cout << endl;
}
