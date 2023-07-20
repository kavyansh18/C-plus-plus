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

    int maxdiff=0;
    int diff=0;
    int currentdiff=0;
    int prevdiff=0;
    for(int i=0;i<n-1;i++){
        int currentdiff=arr[i]-arr[i+1];
        if(currentdiff==prevdiff){
            diff+=1;
        } 
        else{
            if(maxdiff<diff){
                maxdiff=diff;
            }
            diff=0;
        }
        if(maxdiff<diff){
                maxdiff=diff;
        }
        prevdiff=currentdiff;
    }
    cout<<maxdiff+2;
    return 0;
}