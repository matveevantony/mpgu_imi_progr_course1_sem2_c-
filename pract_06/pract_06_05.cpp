#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int arrayOfNums[n];
    int method;
    cout << "Введите 5 целых чисел:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arrayOfNums[i];
    }
    cout << "Возможные сортировки:" << endl << "1 - сортировка по возрастанию" << endl << "2 - сортировка по убыванию" << endl << "Выберите сортировку: ";
    cin >> method;
    switch (method) {
    case 1:
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arrayOfNums[j] > arrayOfNums[j+1]) {
                    int temp = arrayOfNums[j];
                    arrayOfNums[j] = arrayOfNums[j+1];
                    arrayOfNums[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << arrayOfNums[i] << " ";
        }
        cout << endl;
        break;
    case 2:
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arrayOfNums[j] < arrayOfNums[j+1]) {
                    int temp = arrayOfNums[j];
                    arrayOfNums[j] = arrayOfNums[j+1];
                    arrayOfNums[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << arrayOfNums[i] << " ";
        }
        cout << endl;
        break;
    default:
        cout << "Некорретно выбрана сортировка!" << endl;
        break;
    }
}
