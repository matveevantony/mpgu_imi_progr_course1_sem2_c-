#include <iostream>
using namespace std;

int main(){
    int someNumber;
    cout << "Введите, пожалуйста, какое-либо целое число, меньшее 75:" << endl;
    cin >> someNumber;
    if (someNumber < 75) cout << "Отлично! Ваше число " << someNumber << " действительно меньше 75." << endl;
    else cout << "Ай-ай-ай! Вас же просили ввести число, меньшее 75. А вы ввели " << someNumber << ". Ну как так-то?.." << endl;
}
