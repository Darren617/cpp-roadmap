#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> phone_book;

    phone_book["yyy"]=1233323222;
    phone_book["li"]=212341414;
    phone_book["zhang"]=4235235;

    cout<<"电话簿的信息如下：\n";
    for(pair<string,int> item:phone_book){
        cout<<item.first<<" : "<<item.second<<endl;
    }

    //查找
    string name;
    cout<<"请输入要查找的姓名：";
    cin>>name;
    map<string,int>::const_iterator it;
    it=phone_book.find(name);
    if(it==phone_book.end()){
        cout<<"该用户不存在";

    }else{
        cout<<it->first<<" : "<<it->second<<endl;
    }
    return 0;
}