#include<iostream>
using namespace std;
#include<sys/stat.h>
int main(int argc,char* argv[]){
    if(argc!=2){
        cout << "Using: ./demo 文件名\n";
        return -1;
    }
    struct stat st;
    if(stat(argv[1],&st)!=0){
        cout << "获取文件信息失败\n";
        return -1;
    }
    if(S_ISDIR(st.st_mode)){
        cout << argv[1] << " 是目录\n";
    }else if(S_ISREG(st.st_mode)){
        cout << argv[1] << " 是普通文件\n";
    }else{
        cout << argv[1] << " 是其他类型文件\n";
    }
    return 0;
}