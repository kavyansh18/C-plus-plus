#include <iostream>
#include <iomanip> // For setting precision

int main() {
    int integer;
    long longInt;
    char character;
    float floatNum;
    double doubleNum;

    // Input values
    std::cin >> integer >> longInt >> character >> floatNum >> doubleNum;

    // Output values with specified precision
    std::cout << integer << std::endl;
    std::cout << longInt << std::endl;
    std::cout << character << std::endl;
    std::cout << std::fixed << std::setprecision(3) << floatNum << std::endl;
    std::cout << std::fixed << std::setprecision(9) << doubleNum << std::endl;

    return 0;
}
