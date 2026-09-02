#include<iostream>
using namespace std;

int digui(int a){
    if(a==1){
        cout<<1<<endl;
        return 1;
    }else{
        cout<<a<<endl;
        return digui(a-1);
    }
}
int main(){
    int a;
    cin>>a;
    digui(a);
    return 0;
}