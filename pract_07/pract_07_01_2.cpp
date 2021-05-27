#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a,b,c;
	cout << "Квадратное уравнение имеет вид: a * x^2 + b *x + c = 0" << endl << "Введите коэффициенты уравения:" << endl << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	double d = pow(b,2) - 4 * a * c;
	cout << "D = " << d << "  =>  ";
	if (d > 0) {
		cout << "уравнение имеет 2 корня" << endl;
	}
	else {
		if (d == 0) {
			cout << "уравнение имеет единственный корень" << endl;
		}
		else {
			cout << "уравнение не имеет корней" << endl;
		}
	}
}
