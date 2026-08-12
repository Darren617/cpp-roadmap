#include<iostream>

void leak_memory(){
    char *ptr=(char *)malloc(128);

}

int main(){
    leak_memory();
    return 0;
}