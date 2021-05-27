#include <iostream>
using namespace std;

int main() {
    int num1, num2, res1 = 0, res2 = 0;
    cout << "Дано:" << endl << "a = ";
    cin >> num1;
    cout << "b = ";
    cin >> num2;
    res1 = num1 * num1 - num2 * num2;
    res2 = (num1 - num2) * (num1 - num2);
    cout << "Результат:" << endl << "a^2 - b^2 = " << res1 << endl << "(a - b)^2 = " << res2 << endl;
}
