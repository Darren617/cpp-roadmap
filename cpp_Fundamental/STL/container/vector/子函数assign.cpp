#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3};
    vec.assign(2,10);
    for(int x:vec){
        cout<<x<<" ";
    }
    return 0;
}


