#include<iostream>
using namespace std;

int check(int a){
    int sum_left=0,sum_right=0;
    for(int i=0;i<3;i++){
        int t=a%10;
        a/=10;
        sum_right+=t;
    }
    for(int i=0;i<3;i++){
        int t=a%10;
        a/=10;
        sum_left+=t;
    }
    if(sum_left==sum_right){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(check(t)){
            cout<<"You are lucky!"<<endl;
        }else{
            cout<<"Wish you good luck."<<endl;
        }
    }
}