// 1..This problem is to get you familiar with virtual functions. Create three classes Person,
// Professor and Student. The class Person should have data members name and age. The
// classes Professor and Student should inherit from the class Person.

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Virtual function to display information
    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Professor
class Professor : public Person {
private:
    int publications;
public:
    // Constructor
    Professor(string n, int a, int pubs) : Person(n, a), publications(pubs) {}

    // Override displayInfo function
    void displayInfo() override {
        Person::displayInfo();
        cout << "Publications: " << publications << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int studentID;
public:
    // Constructor
    Student(string n, int a, int id) : Person(n, a), studentID(id) {}

    // Override displayInfo function
    void displayInfo() override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    // Create objects of Professor and Student classes
    Professor prof("John Doe", 45, 10);
    Student stud("Alice Smith", 20, 12345);

    // Display information using virtual function
    cout << "Professor's Information:" << endl;
    prof.displayInfo();

    cout << "\nStudent's Information:" << endl;
    stud.displayInfo();

    return 0;
}
