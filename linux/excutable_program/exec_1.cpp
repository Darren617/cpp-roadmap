#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;

int main(int argc,char *argv[]){
    //新进程的进程编号与原进程相同，但是，新进程取代了原进程的代码段、数据段和堆段 
    cout<<"本进程的编号是:"<<getpid()<<endl;
    
    //int ret=execl("/home/ubuntu/CS/linux/excutable_program/exec_2","/home/ubuntu/CS/linux/excutable_program/exec_2",NULL); //最后一个参数0不能省略
    //int ret=system("/home/ubuntu/CS/linux/excutable_program/exec_2");
    //cout<<"ret="<<ret<<endl;
    //perror("execl");

    char *args[10];
    args[0]=(char*)"/bin/ls";
    args[1]=(char*)"-lt";
    args[2]=(char*)"/tmp";
    args[3]=(char*)NULL;// 不能省略
    int ret=execv("/bin/ls",args);
    cout<<"ret="<<ret<<endl;
    perror("execv");
}



