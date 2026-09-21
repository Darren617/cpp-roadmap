#include<iostream>
using namespace std;
#include<time.h>

int main(){
    time_t now1=time(0);//获取当前时间，放在now1中
    long now2;
    time(&now2);

    cout<<"now1="<<now1<<endl;
    cout<<"now2="<<now2<<endl;
    return 0;
}




