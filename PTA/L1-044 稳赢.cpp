#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    int i=0;
    while( getline(cin,s)&& s!="End"){
        if(s=="ChuiZi"&&i<n){
            cout<<"Bu"<<endl;
            i++;
        }else if(s=="JianDao"&&i<n){
            cout<<"ChuiZi"<<endl;
            i++;
        }else if(s=="Bu"&&i<n){
            cout<<"JianDao"<<endl;
            i++;
        }else{
            cout<<s<<endl;
            i=0;
        }
    }
    return 0;
}
