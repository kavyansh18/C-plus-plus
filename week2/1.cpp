#include<iostream>
using namespace std;

int main(){
    float time;
    float acc=32.0;
    float distance;

    cout<<"Enter the value of Time: ";
    cin>>time;
    distance=0.5*acc*time;

    cout<<"The distance is: "<<distance;
    return 0;
}