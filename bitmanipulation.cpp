#include<iostream>
using namespace std;

    int getbit(int n, int pos){
        return(n & (1<<pos)!=0);
    }

    int setbit(int n, int pos){
        return(n | (1<<pos));
    }

    int clearbit(int n,int pos){
        int mask= ~(1<<pos);
        return(n & mask);
    }

    int updatebit(int n, int pos, int value){
        int mask= ~(1<<pos);
        n=n & mask;
        return(n | (value<<pos));

    }
int main(){
    cout<<getbit(0100,2)<<endl;
    cout<<setbit(0101,1)<<endl;
    cout<<clearbit(0101,2)<<endl;
    cout<<updatebit(0101,1,1);

    return 0;
}
