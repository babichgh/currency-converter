#include <iostream>
#include <map>

std::map <std::string, double> RUB {
    {"USD", 0.012}, {"EUR", 0.010}
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

    if (currency1 == "RUB") {
        std::cout << sum << " RUB = " << RUB["USD"] * sum << std::endl;
    }
}