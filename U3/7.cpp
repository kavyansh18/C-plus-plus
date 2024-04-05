// Develop two classes ‘Circle’ and ‘Rectangle’ to calculate the area of circle and area of
// rectangle. Inherit these two classes in a class called ‘Cylinder’ and calculate the volume of the
// cylinder by accessing the radius, length and breadth from circle and rectangle classes.

#include <iostream>
#include <cmath>
using namespace std;

// Base class for Circle
class Circle {
protected:
    double radius;
public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Function to calculate area of circle
    double calculateArea() {
        return M_PI * radius * radius;
    }

    // Getter for radius
    double getRadius() {
        return radius;
    }
};

// Base class for Rectangle
class Rectangle {
protected:
    double length;
    double breadth;
public:
    // Constructor
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Function to calculate area of rectangle
    double calculateArea() {
        return length * breadth;
    }

    // Getter for length
    double getLength() {
        return length;
    }

    // Getter for breadth
    double getBreadth() {
        return breadth;
    }
};

// Derived class for Cylinder
class Cylinder : public Circle, public Rectangle {
private:
    double height;
public:
    // Constructor
    Cylinder(double r, double l, double b, double h) : Circle(r), Rectangle(l, b), height(h) {}

    // Function to calculate volume of cylinder
    double calculateVolume() {
        // Specify which calculateArea() function to call explicitly
        return Circle::calculateArea() * height;
    }
};

int main() {
    double radius, length, breadth, height;

    // Input from user
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Enter height of the cylinder: ";
    cin >> height;

    // Create object of Cylinder class
    Cylinder cyl(radius, length, breadth, height);

    // Display volume of cylinder
    cout << "Volume of Cylinder: " << cyl.calculateVolume() << endl;

    return 0;
}
