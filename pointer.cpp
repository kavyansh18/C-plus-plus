#include<iostream>
using namespace std;

int main(){
    int n=10;
    int *aptr;              //declaration of pointer
    aptr=&n;                //saving the address of n in pointer
    cout<<aptr<<endl;       //getting the address of n
    cout<<*aptr<<endl;      //getting the value of n

    int **p=&aptr;          //saving the address of pointer 
    cout<<*p<<endl;         //will give the aptr
    cout<<**p<<endl;        //will give n

    return 0;
}