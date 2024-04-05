// Develop a C++ program to prepare the mark sheet of a university examination with the
// following items from the keyboard: Name of the student, Register no., Subject name,
// Subject code, Internal marks and External marks. Design a base class consisting of data
// members - Name of the student and Register no. The derived class consists of the data
// members - Subject name, Subject code, Internal marks and External marks.

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
    Student(string name, string regNo) : name(name), registerNo(regNo) {}

    // Function to display student details
    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Register No.: " << registerNo << endl;
    }
};

// Derived class for subject details
class Subject : public Student {
protected:
    string subjectName;
    string subjectCode;
    int internalMarks;
    int externalMarks;
public:
    // Constructor
    Subject(string name, string regNo, string subName, string subCode, int internal, int external)
        : Student(name, regNo), subjectName(subName), subjectCode(subCode), internalMarks(internal), externalMarks(external) {}

    // Function to display subject details
    void displaySubjectDetails() {
        displayStudentDetails();
        cout << "Subject Name: " << subjectName << endl;
        cout << "Subject Code: " << subjectCode << endl;
        cout << "Internal Marks: " << internalMarks << endl;
        cout << "External Marks: " << externalMarks << endl;
    }
};

int main() {
    string name, regNo, subName, subCode;
    int internalMarks, externalMarks;

    // Input from user
    cout << "Enter student details:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Register No.: ";
    getline(cin, regNo);
    cout << "Enter subject details:" << endl;
    cout << "Subject Name: ";
    getline(cin, subName);
    cout << "Subject Code: ";
    getline(cin, subCode);
    cout << "Internal Marks: ";
    cin >> internalMarks;
    cout << "External Marks: ";
    cin >> externalMarks;

    // Create object of Subject class
    Subject studentSubject(name, regNo, subName, subCode, internalMarks, externalMarks);

    // Display mark sheet
    cout << "\nStudent Marksheet:" << endl;
    studentSubject.displaySubjectDetails();

    return 0;
}
