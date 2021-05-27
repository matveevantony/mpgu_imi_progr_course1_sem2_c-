#include <iostream>
using namespace std;

int main() {
    int dividend = 15, devider = 4, quotient = 0, remainder = 0;
    quotient = dividend / devider;
    remainder = dividend % devider;
    cout << "Частное чисел " << dividend << " и " << devider << " равно " << quotient << " (остаток " << remainder << ")" << endl;
}
