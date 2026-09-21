#include<iostream>
#include<unistd.h>
#include<signal.h>
using namespace std;

void func(int a){
    cout<<"收到了信号："<<a<<endl;
    signal(a,SIG_DFL);//回复信号的处理方法为默认行为
}


void func1(int sig){
    cout<<"闹钟响了，执行定时任务。\n";
    alarm(5);
}


int main(int argc,char* argv[]){

    signal(1,func);     //注册回调函数func(),收到信号后，回调func()函数
    signal(15,func);    //回调func函数的时候，吧信号的编号回传给func（）函数
    signal(2,SIG_IGN);  //忽略2的信号, 或 signal(SIGINT,SIG_IGN); 
    signal(9,func);     //此代码无效
    signal(9,SIG_IGN);  //此代码无效
    alarm(5);           //闹钟（定时器），5秒后项本程序发送14的信号
    signal(14,func1);   //设置定时任务函数
    while(true){
        cout<<"执行了一次任务。\n";
        sleep(1);

    }
}







