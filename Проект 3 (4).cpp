#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int count = 0;
    int sum = 0;

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;

        count++;

        if (num % 3 == 0) {
            sum += num;
        }
    }

    cout << "Количество чисел в массиве: " << count << endl;
    cout << "Содержимое массива: ";

    for (int i = 0; i < size; i++) {
        cout << " " << i;
    }

    cout << "\nСумма элементов, кратных 3: " << sum << endl;

    return 0;
}