﻿#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n; 
    int sum = 0; 

    cout << "Введите число n: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    
    cout << "Сумма чисел от 1 до " << n << ": " << sum << endl;

    return 0;
}