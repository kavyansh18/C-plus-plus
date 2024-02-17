// Expected Output:
// 999999999
// 88888888
// 7777777
// 666666
// 55555
// 4444
// 333
// 22
// 1

#include<iostream>
using namespace std;

int main(){
    int num=9;
    int temp=num;
    for(int i=num;i>=1;i--){
        for(int j=1;j<=temp;j++){
            cout<<temp;
        }
        temp--;
        cout<<endl;
    }
    return 0;
}