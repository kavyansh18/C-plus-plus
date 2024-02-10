#include <iostream>
using namespace std;

class speed{
    public:
    int publicspeed=10;
    
    private:
    int privatespeed = 20;
    
    public:
    void getspeed(){
        cout<<publicspeed<<endl;
        cout<<privatespeed<<endl;
    }
};

int main(){
    speed myspeed;
    myspeed.getspeed();
    cout<<myspeed.publicspeed<<endl;
    //cout<<myspeed.privatespeed<<endl;
    return 0;
}