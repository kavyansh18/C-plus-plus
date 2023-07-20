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

    cout<<"Enter the sum to be searched ";
    int k;
    cin>>k;
    int high=n;
    int low=0;
    int count=0;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<"SUM FOUND WITH: "<<low<<" "<<high<<endl;
            count=1;
            break;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    if(count=0){
        cout<<"SUM NOT FOUND"<<endl;
    }
    return 0;
}