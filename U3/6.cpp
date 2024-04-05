// Create two classes named Mammals and MarineAnimals. Create another class named
// BlueWhale which inherits both the above classes. Now, create a function in each of these
// classes which prints "I am mammal", "I am a marine animal" and "I belong to both the
// categories: Mammals as well as Marine Animals" respectively. Now, create an object for
// each of the above class and try calling
// • function of Mammals by the object of Mammal
// • function of MarineAnimal by the object of MarineAnimal
// • function of BlueWhale by the object of BlueWhale
// • function of each of its parent by the object of BlueWhale.

#include <iostream>
using namespace std;

// Base class for mammals
class Mammals {
public:
    // Function to print "I am mammal"
    void printMammal() {
        cout << "I am mammal" << endl;
    }
};

// Base class for marine animals
class MarineAnimals {
public:
    // Function to print "I am a marine animal"
    void printMarineAnimal() {
        cout << "I am a marine animal" << endl;
    }
};

// Derived class for Blue Whale
class BlueWhale : public Mammals, public MarineAnimals {
public:
    // Function to print "I belong to both the categories: Mammals as well as Marine Animals"
    void printBlueWhale() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() {
    // Create objects of each class
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;

    // Calling function of Mammals by the object of Mammals
    mammal.printMammal();

    // Calling function of MarineAnimal by the object of MarineAnimal
    marineAnimal.printMarineAnimal();

    // Calling function of BlueWhale by the object of BlueWhale
    blueWhale.printBlueWhale();

    // Calling function of each of its parent by the object of BlueWhale
    blueWhale.Mammals::printMammal();
    blueWhale.MarineAnimals::printMarineAnimal();

    return 0;
}
