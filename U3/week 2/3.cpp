// Write a C++ Program to demonstrate an Example of Multiple Inheritance.
#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void display1() {
        cout << "Displaying from Base1" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void display2() {
        cout << "Displaying from Base2" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Displaying from Derived" << endl;
    }
};

int main() {
    // Create object of Derived class
    Derived obj;

    // Call member functions of Base1, Base2, and Derived
    obj.display1();
    obj.display2();
    obj.displayDerived();

    return 0;
}
