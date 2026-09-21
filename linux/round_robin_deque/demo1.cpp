#include "_public.h"
//循环队列
int main(){
    using ElemType=int;
    squeue<ElemType,5> QQ;
    ElemType ee;
    cout<<"元素（1，2，3）入队。\n";
    ee=1;QQ.push(ee);
    ee=2;QQ.push(ee);
    ee=3;QQ.push(ee);

    cout<<"队列长度是："<<QQ.size()<<endl;
    QQ.printqueue();
    

}