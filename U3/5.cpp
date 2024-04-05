// Develop a C++ program to print out the subject information using hybrid inheritance

#include <iostream>
#include <string>
using namespace std;

// Base class for student details
class Student {
protected:
    string name;
    string registerNo;
public:
    // Constructor
    Student(string n, string regNo) : name(n), registerNo(regNo) {}

    // Function to display student details
    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Register No.: " << registerNo << endl;
    }
};

// Base class for subject details
class Subject {
protected:
    string subjectName;
    string subjectCode;
public:
    // Constructor
    Subject(string subName, string subCode) : subjectName(subName), subjectCode(subCode) {}

    // Function to display subject details
    void displaySubjectDetails() {
        cout << "Subject Name: " << subjectName << endl;
        cout << "Subject Code: " << subjectCode << endl;
    }
};

// Derived class for marks
class Marks : public Student {
protected:
    int internalMarks;
    int externalMarks;
public:
    // Constructor
    Marks(string name, string regNo, int internal, int external) : Student(name, regNo), internalMarks(internal), externalMarks(external) {}

    // Function to display marks
    void displayMarks() {
        displayStudentDetails();
        cout << "Internal Marks: " << internalMarks << endl;
        cout << "External Marks: " << externalMarks << endl;
    }
};

// Derived class combining student and subject details
class StudentSubject : public Student, public Subject {
public:
    // Constructor
    StudentSubject(string name, string regNo, string subName, string subCode) : Student(name, regNo), Subject(subName, subCode) {}

    // Function to display student and subject details
    void displayStudentSubjectDetails() {
        displayStudentDetails();
        displaySubjectDetails();
    }
};

int main() {
    // Creating object of StudentSubject class
    StudentSubject ss("John", "1234", "Physics", "PHY101");

    // Displaying student and subject details
    cout << "Student and Subject Details:" << endl;
    ss.displayStudentSubjectDetails();

    return 0;
}
