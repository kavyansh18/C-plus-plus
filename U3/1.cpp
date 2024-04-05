// Write a C++ Program display Student Marksheet using Multiple inheritance. Here’s a Simple
// C++ Program display Student Marksheet using Multiple inheritance in C++ Programming
// Language.

#include <iostream>
using namespace std;

// Base class for student details
class Student {
protected:
    string name;
    int rollNo;
public:
    void getStudentDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
    void displayStudentDetails() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Base class for academic marks
class Academic {
protected:
    int marks[5];
public:
    void getAcademicMarks() {
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
    }
    void displayAcademicMarks() {
        cout << "Academic Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class combining both student details and academic marks
class Marksheet : public Student, public Academic {
public:
    void getMarksheet() {
        getStudentDetails();
        getAcademicMarks();
    }
    void displayMarksheet() {
        displayStudentDetails();
        displayAcademicMarks();
    }
};

int main() {
    Marksheet m;
    cout << "Enter student details and marks: " << endl;
    m.getMarksheet();
    cout << "\nStudent Marksheet: " << endl;
    m.displayMarksheet();
    return 0;
}
