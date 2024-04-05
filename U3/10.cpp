// 1.Create a C++ program that demonstrates the use of an abstract class in Hybrid Inheritance. Define an
// abstract class Base with a pure virtual function display(). Derive two classes Derived1 and Derived2
// from Base using single inheritance. Further, derive a class Derived3 from both Derived1 and Derived2
// using multiple inheritance. Implement the display() function in all classes to print a unique message.
// Create objects of Derived3 and invoke the display() function.

#include <iostream>
using namespace std;

// Abstract base class Base
class Base {
public:
    // Pure virtual function display
    virtual void display() = 0;
};

// Derived class Derived1 from Base
class Derived1 : public Base {
public:
    // Implementing display function for Derived1
    void display() override {
        cout << "This is display() function from Derived1" << endl;
    }
};

// Derived class Derived2 from Base
class Derived2 : public Base {
public:
    // Implementing display function for Derived2
    void display() override {
        cout << "This is display() function from Derived2" << endl;
    }
};

// Derived class Derived3 from both Derived1 and Derived2
class Derived3 : public Derived1, public Derived2 {
public:
    // Implementing display function for Derived3
    void display() override {
        cout << "This is display() function from Derived3" << endl;
    }
};

int main() {
    // Create object of Derived3
    Derived3 d3;

    // Invoke display function of Derived3
    d3.display();

    return 0;
}
