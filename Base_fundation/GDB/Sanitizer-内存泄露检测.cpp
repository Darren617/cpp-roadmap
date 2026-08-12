#include<iostream>

void invalid_free(){
    char *ptr=(char *)malloc(128);

    ptr++;
    free(ptr);//free(ptr) 传入的不是 malloc 返回的原始指针，这属于未定义行为（UB），通常会导致堆损坏（heap corruption）或程序崩溃。
}

void invalid_point(){
    char *ptr = (char*)malloc(128);
    free(ptr);

    *ptr='a';//free 之后 ptr 变成了悬垂指针（dangling pointer），*ptr='a' 向已释放的内存写入数据，属于Use-After-Free，同样是未定义行为。
}