#include<iostream>
using namespace std;
#include<vector>

int main(){
    string s;
    vector<int> ans;

    getline(cin,s);
    for(int i=0;i<s.size();i++){
        int size=0;
        if(s[i]=='6'){
            int j=i;
            while(s[j]=='6'){
                size++;
                j++;
            }
        }
        if(size>3&&size<=9){
            //int size=s[3].size();
            s.replace(i,size,"9");
            
        }else if(size>9){
            s.replace(i,size,"27");
            
        }

    }
    cout<<s;
    
    cout<<endl;
    return 0;

}