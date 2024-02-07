#include <iostream>

int main() {
    // Input two integers
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Compute the sum
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;

    // Count the number of digits in the sum
    int count = 0;
    while (sum != 0) {
        sum /= 10;
        count++;
    }

    std::cout << "Number of digits in the sum: " << count << std::endl;

    return 0;
}
