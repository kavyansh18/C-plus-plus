#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,0,5,4,6,8};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        cout<<"MAX TILL "<<i<<"th place is "<<max<<endl;
    }
    return 0; 
}