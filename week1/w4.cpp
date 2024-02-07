#include <iostream>

int main() {
    int number;

    // Input a number
    
    std::cout << "Input a number: ";
    std::cin >> number;

    // Print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}
