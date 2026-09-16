#include<iostream>
using namespace std;
#include<map>

int main(){
    map<string,int> mp;
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++){
        mp.insert(pair<string,int>("aaa",3));
    }
}