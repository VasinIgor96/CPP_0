#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    int maxNumber = INT_MIN;  

    cout << "Введіть 7 цілих чисел:" << endl;

    for (int i = 0; i < 7; i++) {
        cin >> number;

        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    cout << "Максимальне число: " << maxNumber << endl;

    return 0;
}
