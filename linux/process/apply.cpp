#include<iostream>
using namespace std;
#include<unistd.h>

int main(){
    if(fork()>0){
        while(true){
            sleep(1);
            cout<<"父进程运行中...\n";
        }
    }else{
        cout<<"子进程开始执行任务...\n";
        execl("/bin/ls","/bin/ls","-lt","/tmp",NULL);//新进程取代旧进程
        cout<<"子进程开始执行任务，退出。\n";
    }
}