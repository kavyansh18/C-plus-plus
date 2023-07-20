#include<iostream>
using namespace std;

void increment(int *a){
    (*a)++;
}

int main(){
    int a = 10;
    int *p = &a;
    cout<<a<<endl;
    increment(p);
    cout<<a;

    return 0;
}