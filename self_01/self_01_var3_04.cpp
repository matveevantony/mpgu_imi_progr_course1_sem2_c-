#include <iostream>
using namespace std;

int main() {
    string firstString, secondString;
    cout << "Введите первую строку:" << endl;
    cin >> firstString;
    cout << "Введите вторую строку:" << endl;
    cin >> secondString;
    cout << "Наиболее длинная строка:" << endl;
    if (firstString.length() >= secondString.length()) cout << firstString << endl;
    else cout << secondString << endl;;
}
