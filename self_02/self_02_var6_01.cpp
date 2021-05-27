#include <iostream>
using namespace std;

int main()
{
    int s, n;
    cout << "n = ";
    cin >> n;
    s = 0;
    while (n <= 100) {
        s = s + 30;
        n = n * 2;
    }
    cout << s << endl;
    int maxNumberOfItterations = 0, cTwo = 1, minN;
    maxNumberOfItterations = 100 / 30;
    for (int i = 0; i < maxNumberOfItterations; i++) {
        cTwo *= 2;
    }
    minN = 100 / cTwo + 1;
    cout << "Минимальное n, при котором результат меньше 100, равно " << minN << endl;
}
