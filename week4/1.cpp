#include <iostream>
using namespace std;

class Car {
private:
    int privateSpeed; // Private member

protected:
    int protectedSpeed; // Protected member 

public:
    int publicSpeed; // Public member
      
    // Constructor to initialize member variables
    Car(int pSpeed, int prSpeed, int puSpeed) : privateSpeed(pSpeed), protectedSpeed(prSpeed), publicSpeed(puSpeed) {}

    // Method to display speed values
    void displaySpeed() {
        cout << "Private Speed: " << privateSpeed << endl;
        cout << "Protected Speed: " << protectedSpeed << endl;
        cout << "Public Speed: " << publicSpeed << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar(100, 200, 300);

    // Accessing private member (not accessible outside the class)
    // cout << "Private Speed: " << myCar.privateSpeed << endl; // This line will cause a compilation error

    // Accessing protected member (not accessible outside the class or derived classes)
    // cout << "Protected Speed: " << myCar.protectedSpeed << endl; // This line will cause a compilation error

    // Accessing public member (accessible everywhere)
    cout << "Public Speed: " << myCar.publicSpeed << endl;

    // Accessing public member via method
    myCar.displaySpeed();

    return 0;
}
