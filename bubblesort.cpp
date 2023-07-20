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

    int counter=1;
    while(counter<m){
        for(int i=0;i<m-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"Sorted array is ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
