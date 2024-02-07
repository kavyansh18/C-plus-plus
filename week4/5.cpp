// Design a simple program to manage student information using methods in C++. The program should be
// able to add new students, display student details, and calculate the average marks of all students.
// Define some functions outside class using the scope resolution operator.

#include<iostream>
using namespace std;

class student{
public:
    string name;
    int roll;
    char c; 
    int marks;

    void details();
    static void avgmarks(student& a, student& b); //static method so it can be called using ::
    
    // Constructor to initialize the student object
    student(string n, int r, char cl, int m){
        name = n;
        roll = r;
        c = cl; 
        marks = m;
    }
};

void student::details() {
    cout << "Name : " << name << endl;
    cout << "Class: " << c << endl;
    cout << "Roll No.: " << roll << endl;
    cout << "Marks: " << marks << endl;
}

void student::avgmarks(student& a, student& b) {
    cout << "Avg Marks: " << (a.marks + b.marks) / 2.0 << endl; }

int main(){
    student a("Kavyansh", 1, 'A', 100);
    student b("Aniketh", 2, 'A', 90);

    cout << "\nDetails of Student A\n";
    a.details(); 
    cout << "\nDetails of Student B\n";
    b.details(); 
    
    cout << "\nAverage Marks\n";
    student::avgmarks(a, b);  

    return 0;
}
