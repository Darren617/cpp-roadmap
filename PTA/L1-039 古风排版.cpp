#include<iostream>
using namespace std;

int main(){
    int n;//行数
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int c;//列数
    c=(s.length()+n-1)/n;//向上取整

    char pb[n][c];
    int i=0;
    for(int k=c-1;k>=0;k--){
        for(int j=0;j<n;j++){
            if(i>=s.length()){
                pb[j][k]=' ';
                
            }else{
                pb[j][k]=s[i];
                i++;
            }
            
        }
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            cout<<pb[i][j];
        }
        cout<<endl;
    }
   
    return 0;
}