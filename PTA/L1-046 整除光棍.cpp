#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    long long s,n=1;
    int i=1;//个数
    //使被除数大于除数
    while(n<x){
        n=n*10+1;
        i++;
    }
    //cout<<n<<endl;
    /*超时做法
    while(n%x!=0){
        n=n*10+1;
        i++;
    }
    s=n/x;
    cout<<s<<" "<<i<<endl;*/
    while(1){
        cout<<n/x;
        if(n%x==0){
            break;
        }
        n=(n%x)*10+1;
        i++;
    }
    cout<<" "<<i<<endl;
    

    return 0;

}