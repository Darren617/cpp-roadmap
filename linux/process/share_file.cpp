#include<iostream>
#include<fstream>
#include<unistd.h>

using namespace std;

int main(){
    ofstream fout;
    fout.open("/tmp/tmp.txt");

    fork();
    for(int i=0;i<100000000;i++){
        fout<<"进程"<<getpid()<<"西施"<<i<<"即漂亮"<<endl;


    }
    fout.close();
}