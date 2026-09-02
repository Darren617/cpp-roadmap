#include<iostream>
using namespace std;

int main(){
    int a,i=1;
    while(cin>>a){//cin >> a 会读取一个完整整数，并且自动跳过空格、换行、Tab 等空白字符
        if(a==250){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}