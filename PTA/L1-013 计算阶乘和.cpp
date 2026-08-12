#include<iostream>
using namespace std;

int jc(int n){
    if(n==1){
        return 1;
    }
    return n*jc(n-1);
}

int main(){
    int n,result=0;
    cin>>n;
    while(n>0){
        result+=jc(n);
        n--;
    }
    cout<<result<<endl;
    return 0;
}