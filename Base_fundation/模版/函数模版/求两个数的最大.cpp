#include<iostream>
using namespace std;
//或：template<typename T>
template<class T>
T getmax(T a,T b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<getmax(6,7)<<endl;
    cout<<getmax('u','p')<<endl;
    cout<<getmax(7.8,9.9)<<endl;
    cout<<getmax("grdgdgrdgrgw","feetgrr")<<endl;
}