#include <iostream>
using namespace std;

int main() {
    double currentSalary, raisePercentage, newSalary;
    int performanceRating;

    cout << "Enter current annual salary: ";
    cin >> currentSalary;

    cout << "Enter performance rating (1=excellent, 2=good, 3=poor): ";
    cin >> performanceRating;

    switch (performanceRating) {
        case 1:
            raisePercentage = 0.06;
            break;
        case 2:
            raisePercentage = 0.04;
            break;
        case 3:
            raisePercentage = 0.015;
            break;
        default:
            raisePercentage = 0.0;
    }

    newSalary = currentSalary * (1 + raisePercentage);

    cout << "New Salary: " << newSalary << endl;

    return 0;
}
