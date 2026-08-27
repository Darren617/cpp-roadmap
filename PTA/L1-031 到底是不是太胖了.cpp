#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a;
    cin>>a;
    string s;
    cin.ignore();  
    getline(cin,s);

    if(s.length()<n){
        int m=n-s.length();

        for(int i=0;i<m;i++){
            cout<<a;
        }
        cout<<s<<endl;
    }else{
        ;
        cout<<s.substr(s.length()-n)<<endl;
    }
    
    return 0;


}