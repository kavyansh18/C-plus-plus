// Create a C++ program to demonstrate Hybrid Inheritance. Define a base class Shape with a
// virtual function calculate_area(). Derive two classes Rectangle and Circle from Shape using
// single inheritance. Further, derive a class Cylinder from both Rectangle and Circle using
// multiple inheritance. Implement necessary functions to calculate the area of the rectangle,
// circle, and the volume of the cylinder.

#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area
    virtual double calculate_area() = 0;
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
protected:
    double length;
    double width;
public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override calculate_area function for Rectangle
    double calculate_area() override {
        return length * width;
    }
};

// Derived class Circle from Shape
class Circle : public Shape {
protected:
    double radius;
public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override calculate_area function for Circle
    double calculate_area() override {
        return M_PI * radius * radius;
    }
};

// Derived class Cylinder from Rectangle and Circle using multiple inheritance
class Cylinder : public Rectangle, public Circle {
private:
    double height;
public:
    // Constructor
    Cylinder(double r, double l, double w, double h) : Circle(r), Rectangle(l, w), height(h) {}

    // Function to calculate volume of cylinder
    double calculate_volume() {
        return Rectangle::calculate_area() * height;
    }
};

int main() {
    // Define dimensions for Rectangle and Circle
    double rect_length = 5.0;
    double rect_width = 3.0;
    double circle_radius = 4.0;
    double cylinder_height = 8.0;

    // Create objects of Rectangle and Circle
    Rectangle rect(rect_length, rect_width);
    Circle circle(circle_radius);

    // Display area of Rectangle and Circle
    cout << "Area of Rectangle: " << rect.calculate_area() << endl;
    cout << "Area of Circle: " << circle.calculate_area() << endl;

    // Create object of Cylinder
    Cylinder cyl(circle_radius, rect_length, rect_width, cylinder_height);

    // Display volume of Cylinder
    cout << "Volume of Cylinder: " << cyl.calculate_volume() << endl;

    return 0;
}
