#include <iostream>
using namespace std;

int main() {
    const int n = 15;
    int count = 0, summ = 0;
    int arrayOfNums[n] = {4,8,15,-8,57,10,-4,3,1,0,45,2,-7,5,6};
    for (int i = 0; i < n; i++) {
        cout << arrayOfNums[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        if (arrayOfNums[i] > 3) {
            count++;
            summ += arrayOfNums[i];
        }
    }
    cout << endl << "Количество элементов, значение которых больше 3: " << count << endl << "Сумма элементов массива, больших 3: " << summ << endl;
}
