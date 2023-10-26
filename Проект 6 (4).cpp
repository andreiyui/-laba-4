#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int decimalnumber;
    cout << "Введите десятичное число: ";
    cin >> decimalnumber;

    int binaryNumber = 0;
    int power = 1;

    while (decimalnumber > 0) {
        int remainder = decimalnumber % 2;
        binarynumber += remainder * power;
        decimalNumber /= 2;
        power *= 10;
    }

    cout << "Двоичное число: " << binarynumber << endl;

    return 0;
}