#include<iostream>
using namespace std;

int countpath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1; i<=6; i++){
        count += countpath(s+i, e);
    }
    return count;
}

int main(){
    int start;
    int end;
    cout << "ENTER START AND END POINTS: ";
    cin >> start >> end;
    cout << countpath(start, end);
    return 0;
}
