#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 30; i <= 100; i++) {
        if (i % 2 == 0 && i % 3 != 0 && i % 5 != 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << "Всего чисел, удовлетворяющих условиям, " << count << endl;
}
