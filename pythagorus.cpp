#include<iostream>
using namespace std;

int pytha(int n){
    return n*n;
}

int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if(pytha(a)+pytha(b)==pytha(c) || pytha(b)+pytha(c)==pytha(a) || pytha(a)+pytha(c)==pytha(b) ){
        cout<<"Yes it is a pythagorus triplet ";
    }
    else{
        cout<<"No it is not a pythagorus triplet ";
    }
    return 0;
}