#include<iostream>
using namespace std;
#include<unistd.h>
#include<sys/stat.h>
#include<cstdio>

int main(int argc,char* argv[]){
    if(argc!=2){cout<<"Using:./check_catalog 文件目录名\n";return -1;}
    if(access(argv[1],F_OK) !=0 ){
        cout<<"文件或目录"<<argv[1]<<"不存在.\n";return -1;
    }
    cout<<"文件目录"<<argv[1]<<"已存在。\n";
    return 0;
}


