#include<iostream>
using namespace std;
#include<unistd.h>

int main(){
    char path1[256];//linux系统目录最大长度是255
    getcwd(path1,256);
    cout<<"path1="<<path1<<endl;

    char *path2=get_current_dir_name();
    cout<<"path2="<<path2<<endl;
    free(path2);//释放内存：malloc\new delete
    return 0;

}



