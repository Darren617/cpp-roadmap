#include<iostream>
using namespace std;
#include<time.h>

int main(){
    time_t now = time(0);
    cout<<"now= "<<now<<endl;

    tm tmnow;
    localtime_r(&now,&tmnow);//将 time_t 转换为 tm 结构体

    //输出
    string stime = to_string(tmnow.tm_year+1900)+"-"
                    +to_string(tmnow.tm_mon+1)+"-"
                    +to_string(tmnow.tm_mday)+"-"
                    +to_string(tmnow.tm_hour)+":"
                    +to_string(tmnow.tm_min)+":"
                    +to_string(tmnow.tm_sec);
    cout<<"stime"<<stime<<endl;


}







