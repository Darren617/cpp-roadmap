#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    
    int n;
    cin>>n;
    bool hasfind[100000]={};
    bool printed[100000]={};

    vector<string> result;
    
    for(int i=0;i<n;i++){
        int m;
        cin>>m;


        
            for(int j=0;j<m;j++){
                string t;
                cin>>t;
                if(m>1){
                    hasfind[stoi(t)]=true;
                }
                
            }
        
    }

    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        string tmp;
        cin>>tmp;
        if(!hasfind[stoi(tmp)]&&!printed[stoi(tmp)]){
           
            result.push_back(tmp);
            printed[stoi(tmp)]=true;
            
        }
    }
    if(result.size()>0){
        for(int i=0;i<result.size();i++){
            cout<<result[i];
            if(i!=result.size()-1)cout<<" ";
            if(i==result.size()-1)cout<<endl;
        }
    }else{
        cout<<"No one is handsome"<<endl;
    }
    

    return 0;
}



