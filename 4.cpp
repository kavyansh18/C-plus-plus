#include<iostream>
using namespace std;

int main(){
    int r=0;
    while(r!=1){
        int ans=7;
        int guess;
        cout<<"Enter the guess: "<<endl;
        cin>>guess;
        if(guess==ans){
            cout<<"Well guessed";
            r=1;
        }
    }
    return 0;
}