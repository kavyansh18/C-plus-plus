// 1.Create an abstract class Vehicle with pure virtual functions startEngine() and
// stopEngine().Derive two classes Car and Motorcycle from Vehicle. Implement the
// functions to display a message indicating the engine status. Additionally, implement a
// function in the base class to demonstrate dynamic memory allocation for an array of
// pointers to Vehicle objects.
#include <iostream>
using namespace std;

// Forward declarations
class Car;
class Motorcycle;

// Abstract base class Vehicle
class Vehicle {
public:
    // Pure virtual functions
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;

    // Function to demonstrate dynamic memory allocation
    static void createVehicles(int num);
};

// Derived class Car from Vehicle
class Car : public Vehicle {
public:
    // Implementing startEngine() for Car
    void startEngine() override {
        cout << "Car engine started." << endl;
    }

    // Implementing stopEngine() for Car
    void stopEngine() override {
        cout << "Car engine stopped." << endl;
    }
};

// Derived class Motorcycle from Vehicle
class Motorcycle : public Vehicle {
public:
    // Implementing startEngine() for Motorcycle
    void startEngine() override {
        cout << "Motorcycle engine started." << endl;
    }

    // Implementing stopEngine() for Motorcycle
    void stopEngine() override {
        cout << "Motorcycle engine stopped." << endl;
    }
};

// Definition of the createVehicles() function
void Vehicle::createVehicles(int num) {
    Vehicle **vehicles = new Vehicle*[num]; // Dynamically allocate an array of pointers to Vehicle objects
    for (int i = 0; i < num; ++i) {
        vehicles[i] = nullptr; // Initialize each pointer to nullptr
    }

    // Initialize each pointer with an object of type Car or Motorcycle
    for (int i = 0; i < num; ++i) {
        if (i % 2 == 0) {
            vehicles[i] = new Car();
        } else {
            vehicles[i] = new Motorcycle();
        }
    }

    // Perform operations on the allocated objects
    for (int i = 0; i < num; ++i) {
        if (vehicles[i] != nullptr) {
            vehicles[i]->startEngine(); // Start engine
            vehicles[i]->stopEngine(); // Stop engine

            // Delete allocated objects
            delete vehicles[i];
        }
    }

    // Deallocate array of pointers
    delete[] vehicles;
}

int main() {
    // Demonstrate dynamic memory allocation
    Vehicle::createVehicles(5);

    return 0;
}
