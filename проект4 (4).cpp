#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    int maxElement, minElement;
    int maxIndex, minIndex;

    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    cout << "Введите элементы массива: ";
    cin >> maxElement;
    minElement = maxElement;
    maxIndex = 0;
    minIndex = 0;

    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;

        if (num > maxElement) {
            maxElement = num;
            maxIndex = i;
        }

        if (num < minElement) {
            minElement = num;
            minIndex = i;
        }
    }

    cout << "Максимальный элемент: " << maxElement << endl;
    cout << "Индекс максимального элемента: " << maxIndex << endl;

    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Индекс минимального элемента: " << minIndex << endl;

    return 0;
}