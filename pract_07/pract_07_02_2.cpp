#include <iostream>
using namespace std;

int main () {
	const int a1 = 5, b1 = 15, a2 = 25, b2 = 30;
	srand(time(NULL));
	cout << rand() % (b1 - a1 + 1) + a1 << " " << rand() % (b2 - a2 + 1) + a2 << " " << rand() % (b2 - a2 + 1) + a2 << endl;
}
