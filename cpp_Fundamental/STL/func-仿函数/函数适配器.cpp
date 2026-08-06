#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

class myPrint:public binary_function<int,int,void>{
public:
    void operator()(int val,int base)const{cout<<val+base<<endl;}
};
/**/
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for_each(v.begin(),v.end(),bind2nd(myPrint(),n));
    return 0;
}

