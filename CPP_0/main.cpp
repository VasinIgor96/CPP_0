#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

bool isLuckyNumber(int number) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string numString = to_string(number);

    if (numString.length() != 6) {
        return false;
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; i++) {
        sum1 += stoi(string(1, numString[i]));
    }

    for (int i = 3; i < 6; i++) {
        sum2 += stoi(string(1, numString[i])); 
    }

    return sum1 == sum2;
}

int main() {
    int number;

    cout << "Введіть шестизначне число: ";
    cin >> number;

    if (isLuckyNumber(number)) {
        cout << "Введене число є щасливим!" << endl;
    }
    else {
        cout << "Введене число не є щасливим або не є шестизначним!" << endl;
    }

    return 0;
}
