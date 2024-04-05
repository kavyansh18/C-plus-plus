// An electricity board charges the following rates to domestic users to discourage large
// consumption of energy:
// For the first 100 units − 50 P per unit
// Beyond 300 units − 60 P per unit
// If the total cost is more than Rs.250.00 then an additional surcharge of 15% is added on the
// difference. Define a class Electricity in which the function Bill computes the cost. Define a
// derived class More_Electricity and override Bill to add the surcharge.

#include <iostream>
using namespace std;

// Base class for electricity bill calculation
class Electricity {
protected:
    int units;
public:
    // Constructor
    Electricity(int u) : units(u) {}

    // Function to compute the bill
    virtual float Bill() {
        float cost = 0.0;
        if (units <= 100) {
            cost = units * 0.50;
        } else if (units > 100 && units <= 300) {
            cost = 100 * 0.50 + (units - 100) * 0.60;
        } else {
            cost = 100 * 0.50 + 200 * 0.60 + (units - 300) * 0.60;
        }
        return cost;
    }
};

// Derived class for electricity bill calculation with surcharge
class More_Electricity : public Electricity {
public:
    // Constructor
    More_Electricity(int u) : Electricity(u) {}

    // Override Bill function to add surcharge
    float Bill() override {
        float cost = Electricity::Bill();
        if (cost > 250.0) {
            float difference = cost - 250.0;
            cost += difference * 0.15; // Adding 15% surcharge on difference
        }
        return cost;
    }
};

int main() {
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    Electricity e(units);
    More_Electricity m(units);

    cout << "Electricity bill without surcharge: Rs. " << e.Bill() << endl;
    cout << "Electricity bill with surcharge: Rs. " << m.Bill() << endl;

    return 0;
}
