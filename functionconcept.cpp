#include<iostream>
using namespace std;

void print(int n){
    cout<<n<<endl;
    return;
}

int add(int n1,int n2){
    print(n1);
    print(n2);
    int sum=n1+n2;
    return sum;
}
int main(){
    int a=2;
    int b=3;
    cout<<add(2,3)<<endl;
    return 0;
}
