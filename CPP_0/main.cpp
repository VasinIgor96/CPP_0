#include <iostream>
#include <windows.h>
using namespace std;

bool isLeapYear(int year) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

int calculateDays(int day1, int month1, int year1, int day2, int month2, int year2) {
    int days = 0;

    if (year2 < year1 || (year2 == year1 && month2 < month1) || (year2 == year1 && month2 == month1 && day2 < day1)) {
        swap(day1, day2);
        swap(month1, month2);
        swap(year1, year2);
    }

    if (year1 == year2 && month1 == month2) {
        return day2 - day1;
    }

    if (year1 == year2) {
        for (int month = month1; month < month2; month++) {
            days += getDaysInMonth(month, year1);
        }
        days += day2 - day1;
        return days;
    }
 
    for (int year = year1; year < year2; year++) {
        if (year == year1) {
            for (int month = month1; month <= 12; month++) {
                days += getDaysInMonth(month, year);
            }
        }
        else if (year == year2) {
            for (int month = 1; month < month2; month++) {
                days += getDaysInMonth(month, year);
            }
            days += day2;
        }
        else {
            days += isLeapYear(year) ? 366 : 365;
        }
    }

    return days;
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Введіть першу дату (день, місяць, рік): ";
    cin >> day1 >> month1 >> year1;

    cout << "Введіть другу дату (день, місяць, рік): ";
    cin >> day2 >> month2 >> year2;

    int days = calculateDays(day1, month1, year1, day2, month2, year2);

    cout << "Кількість днів між цими двома датами: " << days << endl;

    return 0;
}
