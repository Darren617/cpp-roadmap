#include<iostream>
using namespace std;
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<cstdio>
#include<cstring>

int main(int argc,char * argv[]){
    if(argc!=2){
        cout<<"Using:./stat_ku 文件或目录名\n";
        return -1;
    }
    struct stat st;
    if(stat(argv[1],&st)!=0){
        cout<<"stat("<<argv[1]<<"):"<<strerror(errno)<<endl;
        return -1;
    }
    //获取文件或目录详细信息
    if(S_ISREG(st.st_mode)){
        cout<<argv[1]<<"是一个文件("<<st.st_mtime<<",size="<<st.st_size<<")\n";
    }
    if(S_ISDIR(st.st_mode)){
        cout << argv[1] << "是一个目录(" << "mtime=" << st.st_mtime << ",size=" << st.st_size << ")\n";
    }
    return 0;
}


