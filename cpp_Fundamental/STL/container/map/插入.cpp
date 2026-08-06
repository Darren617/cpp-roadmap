#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> m;
    pair<map<string,int>::iterator,bool> result;
    result=m.insert(pair<string,int>("Tom",18));

    if(result.second){
        cout<<"插入成功"<<endl;
    }else{
        cout<<"插入失败，键已经存在"<<endl;
    }
    cout<<result.first->first<<endl;
    cout<<result.first->second<<endl;
}