#include <iostream>
#include <cstdlib>

int main() {
    int num1, den1, num2, den2;

    // Get the first fraction from the user
    std::cout << "Enter the first fraction (in the form a/b): ";
    std::cin >> num1;
    std::cin.ignore(); // Ignore the '/' character
    std::cin >> den1;

    // Get the second fraction from the user
    std::cout << "Enter the second fraction (in the form c/d): ";
    std::cin >> num2;
    std::cin.ignore(); // Ignore the '/' character
    std::cin >> den2;

    // Calculate the sum
    int sumNum = num1 * den2 + num2 * den1;
    int sumDen = den1 * den2;

    // Display the sum
    std::cout << "Sum = " << sumNum << "/" << sumDen << std::endl;

    return 0;
}
