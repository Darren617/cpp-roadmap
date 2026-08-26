#include<iostream>
#include<cmath>
using namespace std;
//1\0都不是素数
bool check(int a){
    double b;
    if(a<=0||a==1){
        return false;
    }
    b=sqrt(a);
    for(long long i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true; 
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(check(m)){
            cout<<"Yes"<<endl;
            
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
    
}