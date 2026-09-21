#include<iostream>
using namespace std;
#include<unistd.h>

#include<stdlib.h>
int main(int argc,char *argv[]){
    int ret=system("/home/ubuntu/CS/linux/excutable_program/demo1");
    cout<<"ret="<<ret<<endl;
    perror("system");
    return 0;
}




