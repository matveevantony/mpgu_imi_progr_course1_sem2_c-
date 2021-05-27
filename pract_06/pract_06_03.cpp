#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int arrayOfNums[n] = {-10, 2, 9, 45, -7, 0, -3, 1, 100, -999};
    int countNegative = 0;
    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arrayOfNums[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        if (arrayOfNums[i] < 0) {
            countNegative++;
        }
    }
    cout << endl << "Количество отрицательных элементов массива: " << countNegative << endl;
}
