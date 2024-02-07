#include <iostream>
using namespace std;

int main() {
    int quantity, costPerUnit = 100;
    double totalCost;

    cout << "Enter the quantity: ";
    cin >> quantity;

    totalCost = quantity * costPerUnit;

    if (totalCost > 1000) {
        totalCost -= 0.1 * totalCost;  // 10% discount
    }

    cout << "Total cost for the user: " << totalCost << endl;

    return 0;
}
