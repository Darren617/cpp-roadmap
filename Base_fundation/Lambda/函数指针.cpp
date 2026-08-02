#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
void ForEach(const vector<int> &values,const function<void(int)>& func){
    for(int value:values){
        func(value);
    }
}

int main(){
    vector<int> values={1,2,3,4,5,6,7,8};
    int a=10;
    ForEach(values,[=](int value){cout<<"value: "<<a<<endl;});
    cin.get();
}