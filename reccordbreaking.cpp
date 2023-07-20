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
    
    int max;
    for(int i=1; i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            if(arr[i]>max){
                cout<<"Record breaking day: "<<arr[i]<<endl;
                max=arr[i];
            }
        }
    }
    if(arr[n-1]>max){
        cout<<"Record breaking day: "<<arr[n-1]<<endl;
    }
    return 0;
}