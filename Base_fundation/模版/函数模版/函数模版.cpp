#include<iostream>
template<class T>
void swap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10,b=13;
    swap<int>(a,b);
    swap(a,b);//编译器会自动推断
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"b: "<<b<<std::endl;
    return 0;
}
