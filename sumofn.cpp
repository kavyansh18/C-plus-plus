#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<"sum is "<<sum;
    return 0;
}
