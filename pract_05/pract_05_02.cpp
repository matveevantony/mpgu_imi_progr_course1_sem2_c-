#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Введите количество ваших любимых цветов: ";
    cin >> input;
    const int n = input;
    string arrayOfStrings[n];
    cout << "Введите свои любимые цвета (по одному цвету на строчке):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arrayOfStrings[i];
    }
    cout << "Ваши любимые цвета: ";
    for (int i = 0; i < n - 1; i++) {
        cout << arrayOfStrings[i] << ", ";
    }
    cout << arrayOfStrings[n - 1] << "."<< endl;
}
