#include<iostream>
using namespace std;

void func1(){
    cout<<"调用了func1（）\n";
}
void func2(){
    cout<<"调用了func2（）\n";
}

int main(int argc,char * argv[]){
    atexit(func1);//登记第一个进程终止函数
    atexit(func2);//登记第二个进程终止函数，等这个程序正常退出的时候，调用一次 func2()。
    //return 0;
    exit(1);
}

