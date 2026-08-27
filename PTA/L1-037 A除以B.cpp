#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    double a,b;
    cin>>a>>b;
    if(b==0){
        cout<<a<<"/"<<b<<"="<<"Error"<<endl;
        return 0;
    }
    if(b<0){
        cout<<a<<"/("<<b<<")="<<fixed<<setprecision(2)<<a/b<<endl;
    }else{
        cout<<a<<"/"<<b<<"="<<fixed<<setprecision(2)<<a/b<<endl;
    }
    return 0;

}