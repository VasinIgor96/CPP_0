#include <iostream>

#include <windows.h>

using namespace std;

const int FUEL_CAPACITY = 300;
const int FUEL_CONSUMPTION_500KG = 1;
const int FUEL_CONSUMPTION_1000KG = 4;
const int FUEL_CONSUMPTION_1500KG = 7;
const int FUEL_CONSUMPTION_2000KG = 9;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int cargoWeight;
    int distanceAB, distanceBC;

    cout << "Введіть вагу вантажу (у кілограмах): ";
    cin >> cargoWeight;

    cout << "Введіть відстань від пункту А до пункту В (у кілометрах): ";
    cin >> distanceAB;

    cout << "Введіть відстань від пункту В до пункту С (у кілометрах): ";
    cin >> distanceBC;

    int fuelConsumption;
    if (cargoWeight <= 500) {
        fuelConsumption = FUEL_CONSUMPTION_500KG;
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = FUEL_CONSUMPTION_1000KG;
    }
    else if (cargoWeight <= 1500) {
        fuelConsumption = FUEL_CONSUMPTION_1500KG;
    }
    else if (cargoWeight <= 2000) {
        fuelConsumption = FUEL_CONSUMPTION_2000KG;
    }
    else {
        cout << "Літак не може підняти вантаж більше ніж 2000 кг." << endl;
        return 0;
    }

    int requiredFuel = (distanceAB + distanceBC) * fuelConsumption - FUEL_CAPACITY;

    if (requiredFuel > 0) {
        cout << "Необхідно дозаправити літак в пункті В: " << requiredFuel << " літрів палива." << endl;
    }
    else {
        cout << "Літак зможе пролетіти з пункту А в пункт С через пункт В без дозаправки." << endl;
    }

    return 0;
}
