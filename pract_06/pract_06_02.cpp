#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Введите размер массива: ";
    cin >> input;
    const int n = input;
    string arrayOfStrings[n];
    cout << "Введите элементы массива (строковый тип данных):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arrayOfStrings[i];
    }
    cout << "Элементы массива с нечетными индексами:" << endl;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            cout << arrayOfStrings[i] << endl;
        }
    }
}
