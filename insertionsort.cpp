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

    for(int i=1;i<m;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Sorted array is ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
