#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<cmath>
//map的遍历、绝对值
int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    int sum=0;
    for(int i=0;i<n;i++){
        string name;
        int f;
        cin>>name>>f;
        mp.insert(pair<string,int>(name,f));
        sum+=f;
    }
    double avg=(double)sum*1.0/n/2.0;
    int cha=abs(mp.begin()->second-avg);
    int ans=0;
    string an_name=mp.begin()->first;
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++){
        //cha=abs(it->second-avg);
        if(cha>abs(it->second-avg)){
            cha=abs(it->second-avg);
            ans=it->second;
            an_name=it->first;
        }
    }
    //cout<<mp["Chris"]<<endl;
    //cout<<avg<<endl;
    cout<<avg<<" "<<an_name<<endl;
}