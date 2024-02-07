#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.1416;

    std::cout << "The value of pi : " << pi << std::endl;
    
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "The value of pi 4 decimal places of total width 8 : |" << std::setw(8) << pi << "|" << std::endl;
    std::cout << "The value of pi 4 decimal places of total width 10 : |" << std::setw(10) << pi << "|" << std::endl;

    std::cout << std::setfill('-');
    std::cout << "The value of pi 4 decimal places of total width 8 : |" << std::setw(8) << pi << "|" << std::endl;
    std::cout << "The value of pi 4 decimal places of total width 10 : |" << std::setw(10) << pi << "|" << std::endl;
    std::cout << std::setfill(' ');

    std::cout << "The value of pi in scientific format is : " << std::scientific << pi << std::endl;
    std::cout << "Status in number : " << 0 << std::endl;
    std::cout << "Status in alphabet : " << std::boolalpha << false << std::endl;

    return 0;
}
