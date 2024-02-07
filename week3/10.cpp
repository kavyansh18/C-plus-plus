#include <iostream>
#include <string>

class Flat {
private:
    std::string houseName;
    int houseNumber;
    std::string city;
    std::string state;
    int numRooms;
    double totalArea;

public:
    Flat(const std::string& name, int number, const std::string& c, const std::string& s, int rooms) :
        houseName(name), houseNumber(number), city(c), state(s), numRooms(rooms), totalArea(0) {}

    void addRoom(double length, double breadth, double height) {
        double roomArea = length * breadth * height;
        totalArea += roomArea;
    }

    void printDetails() const {
        std::cout << "House Name: " << houseName << std::endl;
        std::cout << "House Number: " << houseNumber << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "State: " << state << std::endl;
        std::cout << "Number of Rooms: " << numRooms << std::endl;
        std::cout << "Total Area: " << totalArea << " square units" << std::endl;
    }
};

int main() {
    std::string houseName, city, state;
    int houseNumber, numRooms;
    double length, breadth, height;

    // Input values for house details
    std::getline(std::cin >> std::ws, houseName);
    std::cin >> houseNumber >> city >> state;
    std::cin >> numRooms;

    // Create a Flat object with the provided values
    Flat flat(houseName, houseNumber, city, state, numRooms);

    // Input values for room dimensions and add rooms to the flat
    for (int i = 0; i < numRooms; ++i) {
        std::cin >> length >> breadth >> height;
        flat.addRoom(length, breadth, height);
    }

    // Print the details of the flat
    flat.printDetails();

    return 0;
}
