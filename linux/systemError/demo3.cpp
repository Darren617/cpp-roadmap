#include<iostream>
using namespace std;
#include<cstring> //strerror()函数需要的头文件
#include<cerrno>  //errno全局变量的头文件
#include<sys/stat.h>//mkdir的头文件
int main(){
    int iret=mkdir("/tmp/aaa/bb/cc/dd",0755);
    if(iret!=0){
        cout<<"iret="<<iret<<endl;
        cout<<errno<<":"<<strerror(errno)<<endl;
        perror("调用mkdir(/tmp/aaa/bb/cc/dd)失败");
    }

    iret=mkdir("/tmp/ddd",0755);
    if(iret!=0){
        cout<<"iret="<<iret<<endl;
        cout<<errno<<":"<<strerror(errno)<<endl;
        perror("调用mkdir(/tmp/dd)失败");

    }
    return 0;
}


