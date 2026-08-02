#include<iostream>
using namespace std;

//左值引用
int & GetValue(){
    static int value=10;
    return value;
}

int main(){
    int i=10;
    int i=GetValue();
    GetValue()=5;
}