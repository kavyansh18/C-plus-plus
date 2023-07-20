#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;             //if a is denoted by 0, the a-a is 0 and so on....
    }
    char ans='a';
    int maxF=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
    cout<<ans<<endl;
    cout<<maxF;
    return 0;
}