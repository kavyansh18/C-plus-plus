#include<iostream>
using namespace std;
#include<climits>

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int maxn=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(array[i]>maxn){
            maxn=array[i];
        }
        if(array[i]<mini){
            mini=array[i];
        }
    }
    cout<<maxn<<endl;
    cout<<mini<<endl;
        return 0;
}
