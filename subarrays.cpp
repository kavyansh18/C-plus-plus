#include<iostream>
using namespace std;

int main(){
        cout<<"Enter the size of array ";
    int n;
    cin>>n;

    cout<<"Enter the elements of array ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            } 
            cout<<endl;
        }
    }
    return 0;
}