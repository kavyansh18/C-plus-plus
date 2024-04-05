// 2.Design an abstract class Shape with pure virtual functions calculateArea() and
// displayInfo(). Derive three classes Circle, Rectangle, and Triangle from Shape.
// Implement the functions to calculate the area and display information for each shape.
// Create an array of pointers to Shape objects and demonstrate polymorphism.
#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class Shape
class Shape {
public:
    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual void displayInfo() const = 0;
};

// Derived class Circle from Shape
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implementing calculateArea() for Circle
    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    // Implementing displayInfo() for Circle
    void displayInfo() const override {
        cout << "Circle: ";
        cout << "Radius = " << radius << ", ";
        cout << "Area = " << calculateArea() << endl;
    }
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementing calculateArea() for Rectangle
    double calculateArea() const override {
        return length * width;
    }

    // Implementing displayInfo() for Rectangle
    void displayInfo() const override {
        cout << "Rectangle: ";
        cout << "Length = " << length << ", ";
        cout << "Width = " << width << ", ";
        cout << "Area = " << calculateArea() << endl;
    }
};

// Derived class Triangle from Shape
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    // Constructor
    Triangle(double b, double h) : base(b), height(h) {}

    // Implementing calculateArea() for Triangle
    double calculateArea() const override {
        return 0.5 * base * height;
    }

    // Implementing displayInfo() for Triangle
    void displayInfo() const override {
        cout << "Triangle: ";
        cout << "Base = " << base << ", ";
        cout << "Height = " << height << ", ";
        cout << "Area = " << calculateArea() << endl;
    }
};

int main() {
    // Create an array of pointers to Shape objects
    const int numShapes = 3;
    Shape *shapes[numShapes];

    // Initialize the array with different shapes
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 7.0);

    // Display information for each shape using polymorphism
    for (int i = 0; i < numShapes; ++i) {
        shapes[i]->displayInfo();
    }

    // Free memory for dynamically allocated objects
    for (int i = 0; i < numShapes; ++i) {
        delete shapes[i];
    }

    return 0;
}
