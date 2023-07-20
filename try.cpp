#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2, 4, 6, 3, 4, 6, 2};
    int xorsum=0;
    for(int i=0;i<7;i++){
        xorsum=xorsum^arr[i];
        cout<<xorsum;
    }
    cout<<xorsum;
    return 0;
}