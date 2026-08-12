#include<iostream>
using namespace std;
//四舍五入：t = (n + 1) / 2;

int main(){
    int n;
    int t;
    char a;
    cin>>n>>a;
    t=(n+1)/2;
    for(int i=0;i<t;i++){
        for(int i=0;i<n;i++){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;

}