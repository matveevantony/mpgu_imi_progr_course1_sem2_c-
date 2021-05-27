#include <iostream>
using namespace std;

int main () {
	const int a = 20, b = 50;
	srand(time(NULL));
	cout << rand() % a << " " << rand() % b << " " << rand() % b << endl;
}
