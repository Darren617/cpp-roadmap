#include<iostream>
using namespace std;
#include<string>

int main(){
    string A;
    string B;
    getline(cin,A);//cin >> A 遇到空格就停止
    getline(cin,B);

    for(int i=0;i<B.length();i++){
        size_t t=A.find(B[i]);
        while(A.find(B[i])!=string::npos){
            A.erase(A.find(B[i]),1);
        }
    }
    for(int i=0;i<A.length();i++){
         cout<<A[i];
    }
   

    return 0;

}