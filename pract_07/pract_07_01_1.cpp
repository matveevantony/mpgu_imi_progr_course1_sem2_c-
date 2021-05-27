#include <iostream>
#include <cmath>
using namespace std;

int main () {
	cout << "Калькулятор тригонометрических функций" << endl << "1 - синус" << endl << "2 - косинус" << endl << "3 - тангенс" << endl << "4 - котангенс" << endl << "Выберите функцию: ";
	int func;
	cin >> func;
	cout << "Введите коэффициент при π в аргументе: ";
	double arg;
	cin >> arg;
	switch (func) {
	case 1:
		cout << sin(arg*M_PI) << endl;
		break;
	case 2:
		cout << cos(arg*M_PI) << endl;
		break;
	case 3:
		cout << tan(arg*M_PI) << endl;
		break;
	case 4:
		cout << 1.0/tan(arg*M_PI) << endl;
		break;
	default:
		cout << "Некорректно выбрана функция" << endl;
		break;
	}
}
