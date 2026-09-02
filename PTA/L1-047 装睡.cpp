#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<string> s;
    string name;
    int a,b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>a>>b;
        if(a<15||a>20||b<50||b>70){
            s.push_back(name);
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    return 0;

}