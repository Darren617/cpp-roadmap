#include<iostream>//标准异常头文件
#include<stdexcept>
using namespace std;

int main(){
    string s="hello world";
    try{
        s.at(100);
    }
    catch(out_of_range& e){
        cout<<e.what()<<endl;
    }
    return 0;
}