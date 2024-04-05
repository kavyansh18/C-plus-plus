// Develop a C++ program to find out the payroll system using single inheritance for multiple
// number of employees.
#include <iostream>
#include <vector>
using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    int id;
    double hourlyRate;
    int hoursWorked;
public:
    // Constructor
    Employee(string n, int i, double rate, int hours) : name(n), id(i), hourlyRate(rate), hoursWorked(hours) {}

    // Virtual function to calculate the payroll
    virtual double calculatePayroll() {
        return hourlyRate * hoursWorked;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Total Salary: $" << calculatePayroll() << endl;
    }
};

// Derived class for SalariedEmployee from Employee
class SalariedEmployee : public Employee {
private:
    double salary;
public:
    // Constructor
    SalariedEmployee(string n, int i, double sal) : Employee(n, i, 0, 0), salary(sal) {}

    // Override calculatePayroll() function for SalariedEmployee
    double calculatePayroll() override {
        return salary;
    }
};

int main() {
    // Create a vector to store employee objects
    vector<Employee*> employees;

    // Add some employees
    employees.push_back(new Employee("John Doe", 101, 20.0, 40));
    employees.push_back(new Employee("Alice Smith", 102, 25.0, 45));
    employees.push_back(new SalariedEmployee("Bob Johnson", 103, 3000.0));

    // Display details and payroll for each employee
    for (Employee* emp : employees) {
        emp->displayDetails();
        cout << endl;
    }

    // Free memory for employee objects
    for (Employee* emp : employees) {
        delete emp;
    }

    return 0;
}
