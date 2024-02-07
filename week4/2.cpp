#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Method to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create a Rectangle object with length 5 and width 3
    Rectangle rect(5, 3);

    // Calculate and display the area
    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    // Calculate and display the perimeter
    std::cout << "Perimeter of the rectangle: " << rect.calculatePerimeter() << std::endl;

    return 0;
}
