#include <iostream>
using namespace std;

int main() {
    string firstName, secondName;
    cout << "Введите имя:" << endl;
    cin >> firstName;
    cout << "Привет, " << firstName << ". Ты первый пользователь этой программы." << endl;
    cout << "Введите ещё одно имя:" << endl;
    cin >> secondName;
    cout << "Привет, " << secondName << ". У этой программы есть ещё один пользователь - " << firstName << ". Теперь вас двое." << endl;
}
