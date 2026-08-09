#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int> bdx(3);
    cin>>bdx[0]>>bdx[1]>>bdx[2];
    sort(bdx.begin(),bdx.end());
    cout<<bdx[0]<<"->"<<bdx[1]<<"->"<<bdx[2]<<endl;
    return 0;

}