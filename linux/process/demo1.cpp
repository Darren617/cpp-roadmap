#include<iostream>
using namespace std;
#include<unistd.h>

int main(){
    int bh=8;
    string message="我是一只小小小鸟";
    pid_t pid=fork();
    if(pid>0){
        bh=9;
        cout<<"父：pid= "<<pid<<endl;
        cout<<"父：亲爱的"<<bh<<"号："<<&message<<endl;
    }else{
        bh=18;
        cout<<"子：pid= "<<pid<<endl;
        cout<<"子：亲爱的"<<bh<<"号："<<&message<<endl;
    }
    
    //sleep(20);
    //cout<<"程序结束。\n";
}

