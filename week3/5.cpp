#include<iostream>
using namespace std;

class employee{
    public:
    string name;
    int id;
    int hw;
    int w;

    void salary(){
        cout<<"Salary is: "<<hw*w<<endl;
    }
    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Employee id: "<<id<<endl;
        cout<<"Hours worked in a week: "<<hw<<endl;
        cout<<"Wages per hour: "<<w<<endl;
    }
};

int main(){
    employee a;
    a.name="Kavyansh";
    a.id=345;
    a.hw=1000;
    a.w=18;
    a.printInfo();
    a.salary();
    return 0;
}