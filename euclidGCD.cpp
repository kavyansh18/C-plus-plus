#include<iostream>
using namespace std;

int main(){
    int a = 42;
    int b = 24;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    cout << "The GCD is: " << a << endl;

    return 0;
}
