#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Find the area of any triangle using Heron's Formula :" << std::endl;
    std::cout << "Input the length of 1st side of the triangle : ";
    std::cin >> a;
    std::cout << "Input the length of 2nd side of the triangle : ";
    std::cin >> b;
    std::cout << "Input the length of 3rd side of the triangle : ";
    std::cin >> c;

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    std::cout << "The area of the triangle is : " << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}
