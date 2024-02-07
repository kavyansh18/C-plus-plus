#include <iostream>

int main() {
    // Input temperature in Celsius
    double celsius;
    std::cout << "Enter temperature in degrees Celsius: ";
    std::cin >> celsius;

    // Convert Celsius to Fahrenheit
    double fahrenheit = (celsius * 9/5) + 32;

    // Display the result
    std::cout << "Temperature in degrees Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
