#include <iostream>
using namespace std;

int main() { // Тело главной функции
    // Объявляем переменные
    int multOfNumbers = 0, firstNumber, secondNumber;
    // Выводим на экран приглашение
    cout << "Введите первое число: ";
    // Ввод числа с клавиатуры
    cin >> firstNumber;
    // Снова приглашение и ввод
    cout << "Введите второе число: ";
    cin >> secondNumber;
    // Вычисляем произведение
    multOfNumbers = firstNumber * secondNumber;
    // Выводим результат на экран
    cout << "Произведение чисел равно: " << multOfNumbers << endl;
}
