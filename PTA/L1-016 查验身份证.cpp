#include<iostream>
using namespace std;
#include<vector>
#include<string>

bool check(string s){
    for(int i=0;i<17;i++){
        if(s[i]>'9'||s[i]<'0'){
        return false;
    }
    }
    
    return true;
}
int z(string s){
    int qz[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int sum=0;
    
    for(int i=0;i<17;i++){

        sum+=(s[i]-'0')*qz[i];
    }
    return sum%11;
}
int main(){
    //vector<int> Z{0 ,1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<char> M{'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    
    vector<string> result;

    int n;
    cin>>n;
    vector<string> S(n);
    for(int i=0;i<n;i++){
        cin>>S[i];
    }
    for(int i=0;i<n;i++){
        if(S[i].length()!=18){
            result.push_back(S[i]);
            continue;
        }
        if(!check(S[i])){
            result.push_back(S[i]);
            continue;
        }
        
        
        int t=z(S[i]);
        if(M[t]!=S[i][17]){
            result.push_back(S[i]);
        }
        
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    if(result.size()==0){
        cout<<"All passed"<<endl;
    }

    return 0;

}