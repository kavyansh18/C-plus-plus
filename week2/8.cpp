#include <iostream>
using namespace std;

int main() {
    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp >= 80) {
        cout << "Swimming";
    } else if (temp >= 60 && temp < 80) {
        cout << "Tennis";
    } else if (temp >= 40 && temp < 60) {
        cout << "Golf";
    } else {
        cout << "Skiing";
    }

    return 0;
}
