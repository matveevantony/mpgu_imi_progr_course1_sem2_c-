#include <iostream>
using namespace std;

int main() {
    const int n = 7;
    string arrayOfStrings[n] = {"арбуз", "дыня", "апельсин", "яблоко", "банан", "груша", "грейпфрут"};
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << arrayOfStrings[i] << endl;
        }
    }
}
