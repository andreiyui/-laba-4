#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n; 
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    int minNumber; 
    int minCount = 0; 
    
    for (int i = 0; i < n; i++) {
        int number;
        cout << "Введите число: ";
        cin >> number;

        if (i == 0 || number < minNumber) {
            minNumber = number;
            minCount = 1;
        } else if (number == minNumber) {
            minCount++;
        }
    }

    cout << "Минимальное число: " << minNumber << endl;
    cout << "Количество повторений минимального числа: " << minCount << endl;

    return 0;
}