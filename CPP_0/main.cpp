#include <iostream>
#include <windows.h>
using namespace std;

double calculateSalary(double sales) 
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    if (sales <= 500) {
        return 200 + sales * 0.03;
    }
    else if (sales <= 1000) {
        return 200 + sales * 0.05;
    }
    else {
        return 200 + sales * 0.08;
    }
}

int main() {
    double sales1, sales2, sales3;

    cout << "Введіть рівень продажів для першого менеджера: ";
    cin >> sales1;

    cout << "Введіть рівень продажів для другого менеджера: ";
    cin >> sales2;

    cout << "Введіть рівень продажів для третього менеджера: ";
    cin >> sales3;

    double salary1 = calculateSalary(sales1);
    double salary2 = calculateSalary(sales2);
    double salary3 = calculateSalary(sales3);

    cout << "Зарплата першого менеджера: " << salary1 << "$" << endl;
    cout << "Зарплата другого менеджера: " << salary2 << "$" << endl;
    cout << "Зарплата третього менеджера: " << salary3 << "$" << endl;

    // Визначення найкращого менеджера
    double maxSalary = max(salary1, max(salary2, salary3));
    cout << "Найкращий менеджер: ";

    if (maxSalary == salary1) {
        cout << "перший менеджер" << endl;
        salary1 += 200; // Нарахування премії першому менеджеру
    }
    else if (maxSalary == salary2) {
        cout << "другий менеджер" << endl;
        salary2 += 200; // Нарахування премії другому менеджеру
    }
    else {
        cout << "третій менеджер" << endl;
        salary3 += 200; // Нарахування премії третьому менеджеру
    }

    cout << "Зарплата першого менеджера з премією: " << salary1 << "$" << endl;
    cout << "Зарплата другого менеджера з премією: " << salary2 << "$" << endl;
    cout << "Зарплата третього менеджера з премією: " << salary3 << "$" << endl;

    return 0;
}
