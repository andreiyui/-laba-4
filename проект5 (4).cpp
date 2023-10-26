#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    int number;
    int sourceBase;
    int targetBase;

    cout << "Введите число: ";
    cin >> number;
    cout << "Введите исходную систему счисления: ";
    cin >> sourceBase;
    cout << "Введите целевую систему счисления: ";
    cin >> targetBase;


    if (sourceBase < 2 || targetBase < 2) {
        cout << "Ошибка: система счисления должна быть не меньше 2." << endl;
        return 0;
    }

    int decimalNumber = 0;
    int baseMultiplier = 1;
    int tempNumber = number;

    while (tempNumber > 0) {
        int digit = tempNumber % 10;
        if (digit >= sourceBase) {
            cout << "Ошибка: цифры числа не соответствуют исходной системе счисления." << endl;
            return 0;
        }
        decimalNumber += digit * baseMultiplier;
        baseMultiplier *= sourceBase;
        tempNumber /= 10;
    }

    string targetNumber;
    while (decimalNumber > 0) {
        int digit = decimalNumber % targetBase;
        targetNumber = to_string(digit) + targetNumber;
        decimalNumber /= targetBase;
    }

   cout << "Число " << number << " в " << sourceBase << "-й системе счисления равно "
        << targetNumber << " в " << targetBase << "-й системе счисления.";

}