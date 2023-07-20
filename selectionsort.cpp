#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array ";
    int m;
    cin>>m;

    cout<<"Enter the elements of array ";
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array is ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}