#include <iostream>
using namespace std;

int main() {
    int someNumber;
    cout << "Введите, пожалуйста, целое число: ";
    cin >> someNumber;
    if (someNumber % 5 == 0) {
        cout << "Ура, ваше число " << someNumber << " делится на 5" << endl;
    }
    else {
        cout << "Увы, ваше число " << someNumber << " НЕ делится на 5" << endl;
    }
}
