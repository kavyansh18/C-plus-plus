#include<iostream>
using namespace std;

class adder {
public:
    int x;
    int y;

    // Method to add and display the result
    void add() {
        cout << "The result is: " << x + y << endl;
    }
};

int main() {
    adder a;
    
    cout << "Enter the 1st number: ";
    cin >> a.x;

    cout << "Enter the 2nd number: ";
    cin >> a.y;

    // Call the add method to display the result
    a.add();

    return 0;
}
