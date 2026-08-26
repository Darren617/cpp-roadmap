#include<iostream>
using namespace std;
#include<iomanip>


int main(){
    int h;
    cin>>h;
    if(h>300||h<100){
        return -1;
    }
    double g;
    g=(h-100)*0.9*2;
    cout<<fixed<<setprecision(1)<<g<<endl;
    return 0;
}