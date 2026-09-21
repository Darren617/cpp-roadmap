#ifndef _PUBLIC_HH
    #define _PUBLIC_HH
#endif
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<sys/sem.h>
using namespace std;

//循环队列
template<class TT,int MaxLength>
class squeue{
private:
    bool m_inited;  //队列被初始化标志，true-已初始化；
    TT m_data[MaxLength];   //用数组存储循环队列中的元素
    int m_head;     //队列的头指针
    int m_tail ;
    int m_length;
    squeue(const squeue &)=delete;//禁止拷贝构造函数
    squeue& operator=(const squeue &)=delete;//禁用赋值函数
public:
    squeue(){init();}
    //注意：如果用于共享内存的队列，不会调用构造函数，必须调用此函数的初始化。
    void init(){
        if(m_inited!=true){
            m_head=0;
            m_tail=MaxLength-1;
            memset(m_data,0,sizeof(m_data));//数组元素清零
            m_inited=true;
        }
    }
    bool push(const TT& ee){
        if(full()==true){
            cout<<"队列已满，入队失败。\n";
            return false;
        }
        m_tail=(m_tail+1)%MaxLength;
        m_data[m_tail]=ee;
        m_length++;
        return true;
    }
    int size(){
        return m_length;
    }
    bool empty(){
        if(m_length==0){
            return true;
        }
        return false;
    }
    //判断循环队列是否已满
    bool full(){
        if(m_length==MaxLength) return true;
        return false;
    }
    TT& front(){
        return m_data[m_head];
    }
    bool pop(){
        if(empty()==true)return false;
        m_head=(m_head+1)%MaxLength;//队列头指针后移
        m_length--;
        return true;
    }

    void printqueue(){
        for(int i=0;i<size();i++){
            cout<<"m_data["<<(m_head+i)%MaxLength<<"],value= "
            <<m_data[(m_head+i)%MaxLength]<<endl;
        }
    }
};









