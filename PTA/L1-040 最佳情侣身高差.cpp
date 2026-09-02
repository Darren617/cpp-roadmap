#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char a;
        double h,ql;

        cin>>a>>h;
        if(a=='M'){
            ql=h/1.09;
        }else if(a=='F'){
            ql=h*1.09;
        }
        cout<<fixed<<setprecision(2)<<ql<<endl;
    }
    return 0;
}