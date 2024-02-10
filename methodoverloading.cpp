#include <iostream>
using namespace std;

int volume(int a){
    cout<<a*a*a<<endl;
}
double volume(int x,int y){
    cout<<3.14*x*y;
}

int main(){
    volume(3);      //will call the int function as two arguments given
    volume(4,5); //will call the double function as two arguments given
}