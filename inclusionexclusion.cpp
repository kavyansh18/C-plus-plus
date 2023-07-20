#include<iostream>                          //find no.(count) which are divisible by 5 and 7 from 1-100
using namespace std;

    int common(){
        int ca=0;
        int cb=0;
        int cab=0;
        for(int i=1;i<=100;i++){
            if(i%5==0){
                ca++;
            }
            else if(i%7==0){
                cb++;
            }
            else if(i%5==0 && i%7==0){
                cab++;
            }
        }
        return ((ca+cb)-cab);

    }
int main(){
    cout<<common();
}