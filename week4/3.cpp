#include <iostream>
#include <string>

class Vehicle {
protected:
    int speed;
    std::string color;

public:
    Vehicle(int s, const std::string& c) : speed(s), color(c) {}

    void displayDetails() const {
        std::cout << "Speed: " << speed << " km/h" << std::endl;
        std::cout << "Color: " << color << std::endl;
    }
};

class Car : public Vehicle {
private:
    std::string brand;

public:
    Car(int s, const std::string& c, const std::string& b) : Vehicle(s, c), brand(b) {}

    void displayDetails() const {
        std::cout << "Car Brand: " << brand << std::endl;
        Vehicle::displayDetails(); // Call base class method to display speed and color
    }
};

class Bike : public Vehicle {
private:
    std::string type;

public:
    Bike(int s, const std::string& c, const std::string& t) : Vehicle(s, c), type(t) {}

    void displayDetails() const {
        std::cout << "Bike Type: " << type << std::endl;
        Vehicle::displayDetails(); // Call base class method to display speed and color
    }
};

int main() {
    Car car(120, "Red", "Toyota");
    std::cout << "Car Details:" << std::endl;
    car.displayDetails();
    std::cout << std::endl;

    Bike bike(80, "Blue", "Sport");
    std::cout << "Bike Details:" << std::endl;
    bike.displayDetails();

    return 0;
}
