#include<iostream>
using namespace std;
#include<signal.h>
#include<unistd.h>

void EXIT(int sig){
    cout<<"收到了信号："<<sig<<endl;
    cout<<"正在释放资源，程序将退出...\n";

    //释放资源
    cout<<"程序退出。\n";
    exit(0);//进程退出
}

int main(){
    //忽略全部信号，防止程序被信号异常中止
    for(int i=1;i<=64;i++){
        signal(i,SIG_IGN);
    }
    //如果收到2和15的信号(ctrl+c和kill、killall)，本程序将主动退出
    signal(2,EXIT);
    signal(15,EXIT);
    while(true){
        cout<<"执行了一次任务。\n";
        sleep(1);
    }

    return 0;
}




