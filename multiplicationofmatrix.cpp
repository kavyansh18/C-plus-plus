#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"ENTER THE NUMBER OF ROWS AND COLUMNS OF 1ST MATRIX ";
    cin>>n1,n2;
    int m1[n1][n2];
    cout<<"ENTER THE ELEMENTS OF 1ST MATRIX ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }

    int n3;
    cout<<"ENTER THE NUMBER OF COLUMNS OF 2ND MATRIX ";
    cin>>n3;
    int m2[n2][n3];
    cout<<"ENTER THE ELEMENTS OF 2ND MATRIX ";
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }

    cout<<"1ST MATRIX IS "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"2ND MATRIX IS "<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }

    //multiplication
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

    cout<<"ANSWER MATRIX IS "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

return 0;
}