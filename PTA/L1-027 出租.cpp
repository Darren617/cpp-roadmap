#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
bool sor(int a,int b){
    return a>b;
}
void printA(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i!=a.size()-1){
            cout<<",";
        }
    }
}

int main(){
    vector<int> arr;
    vector<int> index(11);
    string tel;
    cin>>tel;
    for(int i=0;i<11;i++){
        int cur=tel[i]-'0';
        if(find(arr.begin(),arr.end(),cur)==arr.end()){
            arr.push_back(cur);
        }
        
        
    }
    sort(arr.begin(),arr.end(),sor);
    cout<<"int[] arr = new int[]{";
    printA(arr);
    cout<<"};"<<endl;
    for(int i=0;i<11;i++){
        int cur=tel[i]-'0';
        auto it=find(arr.begin(),arr.end(),cur);
        index[i]=it-arr.begin();
    }

    cout<<"int[] index = new int[]{";
    printA(index);
    cout<<"};";
    
}










