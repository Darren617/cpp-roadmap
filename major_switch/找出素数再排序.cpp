#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int check(int a){
    if(a<2){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> prim;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(check(a)){
            prim.push_back(a);
        }
        
    }
    
    sort(prim.begin(),prim.end());
    for(int i=0;i<prim.size();i++){
        cout<<prim[i]<<endl;
    }
}