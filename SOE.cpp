#include<iostream>
using namespace std;

int main(){
    int arr[51];
    for(int i=0;i<=50;i++){
        arr[i]=i;
    }
    for(int i=2;i<7;i++){                         //7 tk because 8 ka square 64 hota hai jo 50 se jda hai
        for(int j=i*i;j<=50;j++){                // square se because usse pehle ke multiples already previous number k multiples se match honge
            if(j%i==0){
                arr[j]=0;
            }
        }
    }
    arr[1]=0;
    for(int i=0;i<=50;i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
    }
    }
    return 0;
}    