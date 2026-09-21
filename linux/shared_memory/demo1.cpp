#include<iostream>
using namespace std;
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>

struct stgirl{
    int no;
    char name[51];
};

int main(int argc,char* argv[]){
    if(argc!=3){
        cout<<"using:./demo1 no name\n";
        return -1;
    }
    //第一步：创建/获取共享内存，键值key为0x5005，也可以用其他的值。
    int shmid=shmget(0x5005,sizeof(stgirl),0640|IPC_CREAT);
    if(shmid==-1){
        cout<<"shmget(0x5005) failed.\n";
        return -1;
    }
    cout<<"shmid="<<shmid<<endl;

    //第二步：把共享内存连接到当前进程的地址空间
    stgirl * ptr=(stgirl *)shmat(shmid,0,0);
    if(ptr==(void*)-1){
        cout<<"shmat() failed\n";
        return -1;
    }
    //第三步：使用共享内存，对共享内存进行读/写
    cout<<"原值：no="<<ptr->no<<", name="<<ptr->name<<endl;
    ptr->no=atoi(argv[1]);//atoi() 把 C 风格字符串转换成 int 整数，c++：stoi()
    strcpy(ptr->name,argv[2]);
    cout<<"新值:no="<<ptr->no<<" , name="<<ptr->name<<endl;
    
    
    //第四步：把共享内存从当前进程中分离
    shmdt(ptr);

    //第5步：删除共享内存
    if(shmctl(shmid,IPC_RMID,0)==-1){//IPC_RMID 的作用是：表示删除共享内存段。
        cout<<"shmctl failed\n";
        return -1;
    }

}