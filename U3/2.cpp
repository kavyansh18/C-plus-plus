// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance. Here’s a
// Simple Program to illustrates the use of Constructors in multilevel inheritance in C++
// Programming Language.

#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseValue;
public:
    // Constructor
    Base(int value) : baseValue(value) {
        cout << "Base class constructor called with value: " << baseValue << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
protected:
    int derivedValue;
public:
    // Constructor
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {
        cout << "Derived class constructor called with values: " << baseValue << " " << derivedValue << endl;
    }
};

// Further derived class inheriting from Derived
class FurtherDerived : public Derived {
public:
    // Constructor
    FurtherDerived(int baseVal, int derivedVal, int furtherDerivedVal) : Derived(baseVal, derivedVal) {
        cout << "FurtherDerived class constructor called with value: " << furtherDerivedVal << endl;
    }
};

int main() {
    // Creating an object of FurtherDerived class
    FurtherDerived fd(10, 20, 30);

    return 0;
}
