// 2.Create a C++ program to implement an abstract class Vehicle with virtual functions start() and stop().
// Derive two classes Car and Motorcycle from Vehicle and implement their own versions of start() and
// stop(). Create objects of both classes and invoke the functions.

#include <iostream>
using namespace std;

// Abstract base class Vehicle
class Vehicle {
public:
    // Pure virtual functions start() and stop()
    virtual void start() = 0;
    virtual void stop() = 0;
};

// Derived class Car from Vehicle
class Car : public Vehicle {
public:
    // Implementing start() function for Car
    void start() override {
        cout << "Car started." << endl;
    }

    // Implementing stop() function for Car
    void stop() override {
        cout << "Car stopped." << endl;
    }
};

// Derived class Motorcycle from Vehicle
class Motorcycle : public Vehicle {
public:
    // Implementing start() function for Motorcycle
    void start() override {
        cout << "Motorcycle started." << endl;
    }

    // Implementing stop() function for Motorcycle
    void stop() override {
        cout << "Motorcycle stopped." << endl;
    }
};

int main() {
    // Create objects of Car and Motorcycle
    Car car;
    Motorcycle motorcycle;

    // Invoke start() and stop() functions of Car
    cout << "Using Car:" << endl;
    car.start();
    car.stop();

    cout << endl;

    // Invoke start() and stop() functions of Motorcycle
    cout << "Using Motorcycle:" << endl;
    motorcycle.start();
    motorcycle.stop();

    return 0;
}
