#include<iostream>
using namespace std;

int main(){
    int a,b,result=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%5==0 || i%13==0){
            result+=i;
        }
    }
    cout<<result<<endl;
    return 0;
}

