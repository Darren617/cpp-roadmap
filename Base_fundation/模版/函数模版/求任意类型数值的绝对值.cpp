#include<iostream>
using namespace std;

template<class T>
T getAbs(T a){
    if(a>0){
        return a;
    }else{
        return -a;
    }
}

int main(){
    int ia=-5;
    float fa=3.14f;
    double da=-2.4224;
    auto ic=getAbs(ia);
    cout<<"getAbs(ia) = "<<ic<<endl;

    auto id=getAbs(fa);
    cout<<"getAbs(id) = "<<id<<endl;

    auto iaf=getAbs(da);
    cout<<"getAbs(iaf) = "<<iaf<<endl;
}