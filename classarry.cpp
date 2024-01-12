#include<iostream>
using namespace std;

class student {
    string name;

public:
    int age;
    bool gender;

    void setName(string s) {
        name = s;
    }

    void printInfo() {
        cout<< "\nThis is the data:"<<endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    student arr[3];
    string s; // Declare the variable 's'
    
    for (int i = 0; i < 3; i++) {
        cout << "Name: ";
        cin >> s;
        arr[i].setName(s);
        cout << "Age: ";
        cin >> arr[i].age;
        cout << "Gender: ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++) {
        arr[i].printInfo();
    }
    return 0;
}
