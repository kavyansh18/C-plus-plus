#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int gender;

    student(string s,int a,int g){
        cout<<"Parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }    

    student(){
        cout<<"Default Constructor"<<endl;
        name="default";                     //if nothing given then it will add some garbage values
        age=18;
        gender=1;
    }
    
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout << "Destructor Called"<< endl;
    }

    bool operator ==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;}
        else{
            return false;
    }}

    void printInfo(){
        cout<< "\nThis is the data:"<<endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};


    int main(){
        student a("Aarna",1,0);             //parameterised constructor
        a.printInfo();

        student b;                          //default constructor
        b.printInfo();

        student c=a;                        //copy constructor
        c.printInfo();

        if(c==a){
            cout << "Objects are equal." << endl;
        }
        else{
            cout << "Objects are not equal." << endl;
        }
        return 0;
    }