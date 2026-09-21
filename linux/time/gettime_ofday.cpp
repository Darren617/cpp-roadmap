#include<iostream>
#include<sys/time.h>
using namespace std;
/*
int gettimeofday(struct timeval *tv,struct timezone *tz);

struct timeval{
    time_t tv_sec;// 1970-1-1到现在的秒数 
    time_t tv_usec;//当前秒中，已经逝去的微秒数

};*/

int main(){
    timeval start,end;
    gettimeofday(&start,0);//计时开始
    for(int i=0;i<1000000;i++);
    gettimeofday(&end,0);

    //计算消耗的时长
    timeval tv;
    tv.tv_usec=end.tv_usec-start.tv_usec;
    tv.tv_sec=end.tv_sec-start.tv_sec;

    if(tv.tv_usec<0){
        tv.tv_usec=1000000+tv.tv_usec;
        tv.tv_sec--;
    }
    cout<<"耗时："<<tv.tv_sec<<"秒,"<<tv.tv_usec<<"微秒\n";
    return 0;
}





















