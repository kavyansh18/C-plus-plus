#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

float divide(int a, int b){
    return a/b;
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        cout<< "Error: Modulus by zero\n";
        return 0;
    }
}

int main(){
    int a,b,choice;
    cout<<"Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n: ";
    cin>>choice;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    if(choice==1){
        cout<<"The result is: "<<add(a,b);
    }
    else if(choice==2){
        cout<<"The result is: "<<subtract(a,b);
    }
    else if(choice==3){
        cout<<"The result is: "<<multiply(a,b);
    }
    else if(choice==4){
        cout<<"The result is: "<<divide(a,b);
    }
    else if(choice==5){
        cout<<"The result is: "<<mod(a,b);
    }
    return 0;
}