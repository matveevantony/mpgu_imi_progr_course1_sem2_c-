#include <iostream>
using namespace std;

int main() {
    int count = 0; // счётчик подходящих чисел
    for (int i = 50; i <= 198; i++) {
        int k = 0; // счётчик делителей числа (кроме 1 и самого числа)
        const int halfI = i / 2;
        int dividers[4]; // массив делителей числа i
        int j = 2;
        while (j <= halfI && k <= 3) {
            if (i % j == 0) {
                dividers[k] = j;
                k++;
            }
            j++;
        }
        if (k == 3) {
            cout << "Число " << i << " имеет ровно 3 подходящих делителя: " << dividers[0] << " и " << dividers[1] << " и " << dividers[2] << endl;
            count++;
        }
    }
    cout << "Чисел, имеющих ровно 3 натуральных делителя, кроме 1 и самого этого числа, от 50 до 198 ровно " << count << endl;
}
