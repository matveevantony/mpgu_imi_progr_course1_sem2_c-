#include <iostream>
using namespace std;

int main() {
    int arrayOfNumbers[8] = {6, 15, 3, 24, 8, 7, 12, 5};
    cout << "Дан массив: ";
    for (int i = 0; i < 7; i++) {
        cout << arrayOfNumbers[i] << ", ";
    }
    cout << arrayOfNumbers[7] << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arrayOfNumbers[j] > arrayOfNumbers[j + 1]) {
                int temp = arrayOfNumbers[j];
                arrayOfNumbers[j] = arrayOfNumbers[j + 1];
                arrayOfNumbers[j + 1] = temp;
            }
        }
    }
    cout << "Массив, отсортированный по возрастанию: ";
    for (int i = 0; i < 6; i++) {
        cout << arrayOfNumbers[i] << ", ";
    }
    cout << arrayOfNumbers[7] << endl;
}
