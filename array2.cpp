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
    int count=m*((m+1)/2);
    cout<<"No. of subarrays are "<<count<<endl;
    
    int sum=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=i;j<m;j++){
            sum+= arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}