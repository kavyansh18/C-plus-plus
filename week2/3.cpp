#include <iostream>
using namespace std;
int main() {
    const double compensationRate = 0.115;
    double previousSalary, newAnnualSalary, newMonthlySalary, oldMonthlySalary, compensationPay;

    cout << "Enter employee's previous annual salary: ";
    cin >> previousSalary;

    newAnnualSalary = previousSalary * (1 + compensationRate);
    newMonthlySalary = newAnnualSalary / 12.0;
    oldMonthlySalary = previousSalary / 12.0;
    compensationPay = newAnnualSalary - previousSalary;

    cout << "New Annual Salary: " << newAnnualSalary << endl;
    cout << "New Monthly Salary: " << newMonthlySalary << endl;
    cout << "Old Monthly Salary: " << oldMonthlySalary << endl;
    cout << "Compensation Pay: " << compensationPay << endl;

    return 0;
}
