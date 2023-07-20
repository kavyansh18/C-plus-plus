#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int n;
    cout<<"ENTER THE NUMBER ";
    cin>>n;
    int sum=0;
    int on=n;

    while(n>0){ 
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n/=10;
    }
    if(sum==on){
        cout<<"THE NUMBER IS ARMSTRONG!"<<endl;
    }
    else{
        cout<<"THE NUMBER IS NOT ARMSTRONG!"<<endl;
    }
    return 0;
}