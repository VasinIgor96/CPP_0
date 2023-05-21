#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "Введіть чотиризначне число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Помилка! Введене число не є чотиризначним." << endl;
        return 0;
    }

    int digit1, digit2, digit3, digit4;

    digit1 = number / 1000;      
    digit2 = (number / 100) % 10; 
    digit3 = (number / 10) % 10;  
    digit4 = number % 10;         

   
    int newNumber = digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2;

    cout << "Змінене число: " << newNumber << endl;

    return 0;
}
