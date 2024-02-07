#include <iostream>
#include <iomanip>

int main() {
    double number = 0.123456;
    std::cout << std::left << std::setw(15) << number << std::endl;

    return 0;
}
