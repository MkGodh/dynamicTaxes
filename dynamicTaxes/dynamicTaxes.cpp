#include <iostream>


int main() {

    setlocale(LC_ALL, "RUS");

    int profit;

    std::cout << "Введите размер прибыли: ";
    std::cin >> profit;

    if (profit > 50000) {
        int tax = (profit - 50000) / 100 * 30 + (50000 - 10000) / 100 * 20 + (10000 / 100) * 13;
        std::cout << "Размер налога равен: " << tax << "\n";
    }
    else if (profit >= 10000 && profit == 50000) {
        int tax = (profit - 10000) / 100 * 20 + (10000 / 100) * 13;;
        std::cout << "Размер налога равен: " << tax << "\n";
    }
    else if (profit > 0 && profit <= 10000) {
        int tax = profit / 100 * 13;
        std::cout << "Размер налога  равен: " << tax << "\n";
    }
    else if (profit == 0) {
        std::cout << "Правда? Ничего не заработали? А если найдем?\n";
    }
    else {
        std::cout << "Ожидалось не отрицательное число\n";
    }
}
