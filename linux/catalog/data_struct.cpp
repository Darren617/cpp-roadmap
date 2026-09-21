#include<iostream>
using namespace std;
#include<dirent.h>
int main(int argc,char *argv[]){
    if(argc!=2){
        cout<<"Using ./catalog 目录名\n";
        return -1;
    }
    DIR* dir;//定义目录指针
    //打开目录
    if((dir=opendir(argv[1]))==nullptr)return -1;
    //用于存放从目录中读取到的内容
    struct dirent * stdinfo=nullptr;
    while(1){
        //读取一项内容并显示出来
        if((stdinfo=readdir(dir))==nullptr) break;
        cout<<"文件名="<<stdinfo->d_name<<",文件类型"<<(int)stdinfo->d_type<<endl;        
    }
    closedir(dir);//关闭
}







