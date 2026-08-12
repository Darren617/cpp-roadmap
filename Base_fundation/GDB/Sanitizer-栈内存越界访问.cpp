#include<iostream>

void stack_overflow(){
    int array[5] = {0};//// 数组有 5 个元素：array[0] ~ array[4]
    array[5] = 1;

}


int main(){
    stack_overflow();
}
