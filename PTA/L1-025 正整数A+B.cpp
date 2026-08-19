#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int check(string a){
    int sum=0;
    for(int i=0;i<a.length();i++){
        if(isdigit(a[i])){
            sum=sum*10+a[i]-'0';
        }else{
            return -1;
        }

    }
    if(sum>=1&&sum<=1000){
        return sum;
    }else{
        return -1;
    }

}



int main(){
    string a,b;
    cin>>a;
    int result=0;
    getchar();
    getline(cin,b);
    if(check(a)==-1){
        cout<<"? + ";
    }else{
        cout<<check(a)<<" + ";
    }
    if(check(b)==-1){
        cout<<"?";
    }else{
        cout<<check(b);
    }
    cout<<" = ";
    if(check(a)==-1||check(b)==-1){
        cout<<"?\n";
    }else{
        result=check(a)+check(b);
        cout<<result<<endl;
    }

    return 0;

}