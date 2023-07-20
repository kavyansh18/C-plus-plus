#include<iostream>
using namespace std;

int main(){
    int arr[4]={1,43,64,34};
    int key;
    cin>>key;
    int c=0;

    for(int i=0;i<=4;i++){
        if(arr[i]==key){
            cout<<"YES "<<endl;
            cout<<i<<endl;
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"NOT FOUND "<<endl;
    }
    return 0;
}