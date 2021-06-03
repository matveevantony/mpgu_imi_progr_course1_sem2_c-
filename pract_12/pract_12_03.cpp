#include <iostream>
using namespace std;

int main(){
	int someNumber;
	cout << ">>> ";
	cin >> someNumber;
	someNumber = abs(someNumber);
	while (someNumber != 0) {
		int maxDigit = 0;
		while (someNumber != 0) {
			int digit = someNumber % 10;
			if (digit > maxDigit) {
				maxDigit = digit;
			}
			someNumber /= 10;
		}
		cout << "<<< " << maxDigit << endl;
		cout << ">>> ";
		cin >> someNumber;
		someNumber = abs(someNumber);
	}
}
