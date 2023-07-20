#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ROWS AND COLUMNS ";
    cin>>n;
    int arr[n][n];
    cout<<"ENTER THE ELEMENTS ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"TRANPOSE MATRIX "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
