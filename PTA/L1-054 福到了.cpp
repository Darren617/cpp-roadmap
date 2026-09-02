#include<iostream>
using namespace std;
#include<string>
#include<vector>
int main(){
    char a;
    int n;
    bool flag=true;
    cin>>a>>n;
    cin.ignore();
    vector<string> sr(n,string(n,' '));
    vector<string> sc(n,string(n,' '));
    
    for(int i=0;i<n;i++){
        getline(cin,sr[i]);
        for(int j=0;j<n;j++){
            if(sr[i][j]!=' '){
                sc[n-1-i][n-j-1]=a;
                sr[i][j]=a;
            }
        }
    }
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(sr[i][j]!=sc[i][j]){
            flag=false;
            }
        }
        
    }
    //输出
    if(flag){
        cout<<"bu yong dao le"<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sc[i][j];
        }
        cout<<endl;
    }
    return 0;
}