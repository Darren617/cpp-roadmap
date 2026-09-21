#include<iostream>
using namespace std;
#include<cstring>
int main(){
    for(int i=0;i<150;i++){ //gcc8.3.1一共有133个错误代码。
        cout<<i<<":"<<strerror(i)<<endl;

    }
    return 0;
}




