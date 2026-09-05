#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int result;
    result=100*100/2-x*y/2-(100-x)*y-(100-x)*(100-y)/2;
    cout<<result<<endl;
    return 0;
}