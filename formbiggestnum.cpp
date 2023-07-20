#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"ENTER THE DATA ";
    cin>>s;
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    int x = stoi(s);
    cout<<x;
    return 0;
}