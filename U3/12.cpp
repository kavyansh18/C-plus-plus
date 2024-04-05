// 3.Create a C++ program to implement an abstract class Shape with pure virtual functions
// calculate_area() and display_shape(). Derive two classes Rectangle and Circle from Shape and
// implement their versions of calculate_area() and display_shape(). Create objects of both classes and
// invoke the functions.

#include <iostream>
using namespace std;

// Abstract base class Shape
class Shape {
public:
    // Pure virtual functions
    virtual float calculate_area() = 0;
    virtual void display_shape() = 0;
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Implementing calculate_area() for Rectangle
    float calculate_area() override {
        return length * width;
    }

    // Implementing display_shape() for Rectangle
    void display_shape() override {
        cout << "Rectangle with Length = " << length << " and Width = " << width << endl;
    }
};

// Derived class Circle from Shape
class Circle : public Shape {
private:
    float radius;
public:
    // Constructor
    Circle(float r) : radius(r) {}

    // Implementing calculate_area() for Circle
    float calculate_area() override {
        return 3.14159 * radius * radius;
    }

    // Implementing display_shape() for Circle
    void display_shape() override {
        cout << "Circle with Radius = " << radius << endl;
    }
};

int main() {
    // Create objects of Rectangle and Circle
    Rectangle rect(5.0, 3.0);
    Circle circle(4.0);

    // Invoke functions for Rectangle
    cout << "Rectangle Area: " << rect.calculate_area() << endl;
    rect.display_shape();

    cout << endl;

    // Invoke functions for Circle
    cout << "Circle Area: " << circle.calculate_area() << endl;
    circle.display_shape();

    return 0;
}
