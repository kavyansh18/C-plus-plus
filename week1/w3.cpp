#include <iostream>

int main() {
    int digit;

    // Input a single-digit number
    std::cout << "Enter a single-digit number: ";
    std::cin >> digit;

    // Check if the entered number is a single-digit
    if (digit >= 0 && digit <= 9) {
        // Display the rectangular form as an empty box
        for (int row = 1; row <= 6; ++row) {
            for (int col = 1; col <= 4; ++col) {
                if (row == 1 || row == 6 || col == 1 || col == 4) {
                    // Print the digit only for the border
                    std::cout << digit << " ";
                } else {
                    // Print empty space for the interior
                    std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Please enter a single-digit number." << std::endl;
    }

    return 0;
}
