#include<iostream>
using namespace std;

int main()  {
    float n1,n2;
    cout<<" Enter Numbers";
    cin>>n1>>n2;

    char op;
    cout<<" Enter Operation";
    cin>>op;

    switch(op) {
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Invalid Operation";
    }
    return 0;
}