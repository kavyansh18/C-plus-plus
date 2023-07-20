#include<iostream>
using namespace std;

int main(){
    int n=1234;
    int k=0;

    while (n>0){
        int lastdigit=n%10;
        k=k*10 + lastdigit;
        n=n/10;
    }
    cout<<k;
    return 0;

}