#include <iostream>
using namespace std;

int main() {
    string userName1, userName2;
    int userAge1, userAge2;
    cout << "Введите имя: " << endl;
    cin >> userName1;
    cout << "Введите возраст:" << endl;
    cin >> userAge1;
    cout << "Введите ещё имя и возраст:" << endl;
    cin >> userName2 >> userAge2;
    cout << "Разница в возрасте пользователей " << userName1 << " и " << userName2 << " составляет " << abs(userAge1 - userAge2) << " лет." << endl;
}
