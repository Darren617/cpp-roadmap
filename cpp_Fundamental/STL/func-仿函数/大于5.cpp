#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

class GreaterThanFive:public unary_function<int,bool>{
public:
    bool operator()(int val)const{return val>5;}
};

int main(){
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    vector<int> :: iterator pos=find_if(v.begin(),v.end(),not1(GreaterThanFive())); //1. 一元取反 not1
    if(pos!=v.end()){
        cout<<*pos<<endl;
    }
    return 0;
}