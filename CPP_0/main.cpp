#include <iostream>
#include <iostream>
#include <windows.h>
using namespace std;

const int FUEL_CAPACITY = 300;
const int FUEL_CONSUMPTION_500KG = 1;
const int FUEL_CONSUMPTION_1000KG = 4;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int cargoWeight;
    int distanceAB, distanceBC;

    std::cout << "Введіть вагу вантажу (у кілограмах): ";
    std::cin >> cargoWeight;

    std::cout << "Введіть відстань від пункту А до пункту В (у кілометрах): ";
    std::cin >> distanceAB;

    std::cout << "Введіть відстань від пункту В до пункту С (у кілометрах): ";
    std::cin >> distanceBC;

    int fuelConsumption = (cargoWeight <= 500) ? FUEL_CONSUMPTION_500KG : FUEL_CONSUMPTION_1000KG;

    int totalFuelConsumption = (distanceAB + distanceBC) * fuelConsumption;

    if (totalFuelConsumption <= FUEL_CAPACITY) {
        std::cout << "Літак зможе пролетіти з пункту А в пункт С через пункт В з вантажем " << cargoWeight << " кг" << std::endl;
    }
    else {
        std::cout << "Літак не зможе пролетіти з пункту А в пункт С через пункт В з вантажем " << cargoWeight << " кг" << std::endl;
    }

    return 0;
}
