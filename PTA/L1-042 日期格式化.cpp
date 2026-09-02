#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int a,b,c;
    cin>>a;
    cin.ignore();
    cin>>b;
    cin.ignore();
    cin>>c;
    cout<<c<<"-"<<fixed<<setw(2)<<setfill('0')<<a<<"-"<<setw(2)<<b<<endl;
    return 0;

}