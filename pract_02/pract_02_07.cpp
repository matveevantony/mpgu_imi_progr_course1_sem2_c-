#include <iostream>
using namespace std;

int main() {
    int result = 0, dividend, devider;
    cout << "Введите делимое: ";
    cin >> dividend;
    cout << "Введите делитель: ";
    cin >> devider;
    // Начинается ветвление
    if (devider * 2 == dividend) {
        result = 2;
        cout << "Делитель есть половина от делимого!" << endl;
    }
    else {
        result = dividend / devider;
    }
    // Выводим ответ на экран
    cout << "Частное (без остатка): " << result << endl;
}
