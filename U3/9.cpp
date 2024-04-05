// 2.Write a c++ program to calculate the area of rectangle, circle and square using
// virtual function

#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override calculateArea function
    double calculateArea() override {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override calculateArea function
    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

// Derived class Square
class Square : public Shape {
private:
    double side;
public:
    // Constructor
    Square(double s) : side(s) {}

    // Override calculateArea function
    double calculateArea() override {
        return side * side;
    }
};

int main() {
    double length, width, radius, side;

    // Input from user for rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    // Create object of Rectangle class
    Rectangle rect(length, width);
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    // Input from user for circle
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Create object of Circle class
    Circle circle(radius);
    cout << "Area of Circle: " << circle.calculateArea() << endl;

    // Input from user for square
    cout << "Enter side of the square: ";
    cin >> side;

    // Create object of Square class
    Square square(side);
    cout << "Area of Square: " << square.calculateArea() << endl;

    return 0;
}
