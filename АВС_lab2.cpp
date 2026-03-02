#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Сложение двух чисел в формате IEEE 754 (32-бит)" << endl;

    int znak1, exp1, mant1;
    cout << "Число 1:" << endl;
    cout << "Знак (0 или 1): ";
    cin >> znak1;
    cout << "Экспонента (8 бит, 0-255): ";
    cin >> exp1;
    cout << "Мантисса (23 бит, 0-8388607): ";
    cin >> mant1;

    int znak2, exp2, mant2;
    cout << "Число 2:" << endl;
    cout << "Знак (0 или 1): ";
    cin >> znak2;
    cout << "Экспонента (8 бит, 0-255): ";
    cin >> exp2;
    cout << "Мантисса (23 бит, 0-8388607): ";
    cin >> mant2;

    double num1 = (znak1 == 0 ? 1 : -1) * (1.0 + mant1 / 8388608.0) * pow(2.0, exp1 - 127);
    double num2 = (znak2 == 0 ? 1 : -1) * (1.0 + mant2 / 8388608.0) * pow(2.0, exp2 - 127);

    double sum = num1 + num2;

    cout << "Сумма: " << sum << endl;

    return 0;
}