#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    double r,z,result;
    cin>>r>>z;
    result=r*z*0.1;
    cout<<fixed<<setprecision(2)<<result<<endl;
    return 0;
}