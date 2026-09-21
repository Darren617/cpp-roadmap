#include<iostream>
using namespace std;
#include<sys/stat.h>
#include<cstring>
int main(){
    int iret=mkdir("/tmp/aaa",0755);
    cout<<"iret= "<<iret<<endl;
    cout<<errno<<":"<<strerror(errno)<<endl;
    return 0;
}



