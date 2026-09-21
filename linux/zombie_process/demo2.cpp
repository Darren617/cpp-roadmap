#include<iostream>
using namespace std;
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    if(fork()>0){
        //父进程的流程
        int sts;
        pid_t pid=wait(&sts);//父进程等待某一个子进程结束，并回收这个子进程。
        cout<<"已终止的子进程编号是："<<pid<<endl;
        if(WIFEXITED(sts)){cout<<"子进程是正常退出的，退出状态是："<<WEXITSTATUS(sts)<<endl;}
        else{cout<<"子进程是异常退出的，终止他的信号是:"<<WTERMSIG(sts)<<endl;}
    }else{
        //子进程的流程
        int *p=0;*p=10;//操纵空指针，造成内存泄漏.
        exit(1);
    }
}

