#include<iostream>
using namespace std;

class student {
public:
    string name;
    int age;
    bool gender;
};

int main() {
    student a;
    a.name = "Kavyansh";
    a.age = 19;
    a.gender = true;  // true for male, false for female

    student b;
    b.name = "Akshat";
    b.age = 18;
    b.gender = false;  // true for male, false for female

    return 0;
}
