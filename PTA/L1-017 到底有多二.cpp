#include<iostream>
using namespace std;
#include<string>
#include<iomanip>


int main(){
    string s;
    cin>>s;
    double fe=1.0;
    int e=0,len;
    for(int i=0;i<s.length();i++){
        if(s[i]=='2'){
            e++;
        }
    }
    
    if(s[0]=='-'){
        len=s.length()-1;
        fe*=1.5;
        fe*=(double)e/len;
    }else{
        fe*=e/s.length();
    }
    if((s[s.length()-1]-'0')%2==0){
        fe*=2.0;
    }
    cout<<fixed<<setprecision(2)<<fe*100<<"%"<<endl;
    return 0;
}
