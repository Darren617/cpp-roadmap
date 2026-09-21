#include<iostream>
using namespace std;
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    //在后台运行需要：./main &
    if(fork()>0){//父进程的流程
        sleep(20);
        cout<<"父进程将退出。"<<endl;
        return 0;
    }else{//子进程的流程
        for(int i =0;i<100;i++){
            cout<<"子进程继续进行中"<<endl;
            sleep(1);
        }
    }
}
