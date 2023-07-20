#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "ENTER THE NUMBER OF ROWS AND COLUMNS: ";
    cin >> n1 >> n2;
    int m1[n1][n2];
    cout << "ENTER THE ELEMENTS: ";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin >> m1[i][j];
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
 
    int r = 0, c = n2 - 1;
    int target;
    cout << "ENTER THE TARGET ELEMENT: ";
    cin >> target;
    bool found = false;
    while(r < n1 && c >= 0){
        if(m1[r][c] == target){
            found = true;
            break;
        }
        if(m1[r][c] > target){
            c--;
        }
        if(m1[r][c] < target){
            r++;
        }
    } 

    if(found){
        cout << "Element " << target << " found in the matrix." << endl;
    }
    else{
        cout << "Element " << target << " not found in the matrix." << endl;
    }

    return 0;
}
