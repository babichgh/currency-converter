#include <iostream>
#include <map>

std::map <std::string, double> USD {
    {"EUR", 0.85}, {"RUB", 84.75}
};

std::map <std::string, double> EUR {
    {"USD", 1.17}, {"RUB", 97.77}
};

std::map <std::string, double> RUB {
    {"USD", 0.012}, {"EUR", 0.01}
};

int main() {
    std::string currency1;
    std::cout << "Input currency you want to translate from (USD, EUR, BTC, etc.): ";
    std::cin >> currency1;

    std::string currency2;
    std::cout << "Input currency you want to translate in: ";
    std::cin >> currency2;

    double sum;
    std::cout << "Input the sum: ";
    std::cin >> sum;

    if (currency1 == "USD") {
        std::cout << sum << " USD = " << USD[currency2] * sum << std::endl;
    } else if (currency1 == "EUR") {
        std::cout << sum << " EUR = " << EUR[currency2] * sum << std::endl;
    } else if (currency1 == "RUB") {
        std::cout << sum << " RUB = " << RUB[currency2] * sum << std::endl;
    }
}