#include<iostream>
using namespace std;

int main() {
    int arr[7] = {2, 4, 6, 3, 4, 6, 2};

    for (int i = 0; i < 7; i++) {
        int check = 0;                          
        for (int j = 0; j < 7; j++) {
            if (i != j) {
                int k=arr[i] ^ arr[j];
                cout<<k;
                if (arr[i] ^ arr[j] == 0) {
                    check++;
                }
            }
        }
        cout<<endl;
        if (check == 0) {
            cout << "UNIQUE ELEMENT FOUND: " << arr[i] << endl;
        }
    }
    
    return 0;
}

corrected code;
#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2, 4, 6, 3, 4, 6, 2};
    int xorsum=0;
    for(int i=0;i<7;i++){
        xorsum=xorsum^arr[i];
    }
    cout<<xorsum;
    return 0;
}
