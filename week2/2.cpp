#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int radius;
    float area;

    cout<<"Enter the value of radius: ";
    cin>>radius;
    area=(4.0/3.0)*3.14*pow(radius,3);

    cout<<"The area is: "<<area;
    return 0;
}