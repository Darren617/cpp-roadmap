#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
struct TeamData{
    string name;
    int score;
    friend ostream& operator<<( ostream& os,const TeamData& td){
        return os<<td.name<<" "<<td.score<<endl;
    }
    friend istream& operator>>(istream& is,TeamData &td){
        return is>>td.name>>td.score;
    }
};
bool operator<(const TeamData& td1,const TeamData& td2){
    if(td1.score>td2.score){
        return true;
    }else if(td1.score==td2.score){
        return td1.name<td2.name;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<struct TeamData> td(n);

    for(auto &it:td){
        cin>>it;
    }
    sort(td.begin(),td.end());
    for(auto &it :td){
        cout<<it;
    }
    return 0;
}