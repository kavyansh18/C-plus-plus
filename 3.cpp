#include<iostream>
#include<cstring> 
using namespace std;

void reverse(char s[]) {
    int length = strlen(s);
    for(int i = length - 1; i >= 0; i--) {
        cout << s[i];
    }
}

int main() { 
    char s[] = "Hello World";
    reverse(s);
    return 0;
}
