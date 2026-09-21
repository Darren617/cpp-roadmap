#include<iostream>
#include<unistd.h>
#include<signal.h>
using namespace std;

void FathEXIT(int sig);//父进程的信号处理函数
void ChldEXIT(int sig);//子进程的信号处理函数

int main(){
    for(int i=1;i<=64;i++){ //忽略全部信号，不希望被打扰
        signal(i,SIG_IGN);
    }
    //设置信号，在shell状态下可用“kill进程号” 或“ctrl+c”正常终止进程
    //但请不要用“kill -9 + 进程号”强行终止
    signal(SIGTERM,FathEXIT);
    signal(SIGINT,FathEXIT);//

    while(true){
        if(fork()>0)
        {//父进程的流程
            sleep(5);continue;
        }else{
            signal(SIGTERM,ChldEXIT);
            signal(SIGINT,SIG_IGN);//子进程不需要捕获SIGINT信号，忽略信号
            while(true){
                cout<<"子进程"<<getpid()<<"正在运行中.\n";
                sleep(3);
                continue;
            }
        }
    }
    return 0;
}

void FathEXIT(int sig){
    //以下代码是未来防止信号处理函数在执行的过程中再次被信号中断
    signal(SIGINT,SIG_IGN);signal(SIGTERM,SIG_IGN);

    cout<<"父进程退出，sig="<<sig<<endl;
    kill(0,SIGTERM);//向全部的子进程发送15的信号，通知他们退出。
    //还可以增加释放资源的代码(只释放子进程的资源)
    exit(0);
}

void ChldEXIT(int sig){
    //以下代码是未来防止信号处理函数在执行的过程中再次被信号中断
    signal(SIGINT,SIG_IGN);signal(SIGTERM,SIG_IGN);
    
    cout<<"子进程"<<getpid()<<"退出，sig="<<sig<<endl;

    exit(0);
}