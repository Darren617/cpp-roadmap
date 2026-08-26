#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a;
    cin>>a;
    string s;
    getline(cin,s);
    int m=n-s.length();
    

    for(int i=0;i<m;i++){
        cout<<a;
    }
    cout<<s<<endl;
    return 0;


}