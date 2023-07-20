#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER"<<endl;
    cin>>n;
    int i;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"NOT PRIME NUMBER "<<n<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"PRIME NUMBER "<<n<<endl;
    }
    return 0;
}