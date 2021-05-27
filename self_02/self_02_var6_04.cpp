#include <iostream>
using namespace std;

int main() {
    // int x, L, M;
    // cin >> x;
    int i = 0; // счётчик
    bool y = 0; // логическая переменная - ключ выхода из цикла
    while (y == 0) {
        i++;
        int x = i;
        int L = 0;
        int M = 0;
        while (x > 0) {
            M = M + 1;
            if (x % 2 != 0) {
                L = L + 1;
            }
            x = x / 3;
        }
        // cout << L << endl << M << endl;
        if (L == 1 && M == 3) {
            y = 1;
        }
    }
    cout << "Минимальное целое положительное x, при котором программа выведет сначала 1, а потом 3, равно " << i << endl;
}
