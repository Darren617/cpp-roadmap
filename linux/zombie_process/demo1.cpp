#include<iostream>
using namespace std;
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    //直接运行就能在后台运行，不需要: ./demo1 &
    if(fork()>0)return 0;
    while(true){
        cout<<"服务运行中。"<<endl;
        sleep(1);
    }
}
