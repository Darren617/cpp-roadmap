#include<iostream>
using namespace std;

class Entity{
private:
    int *m_x,m_y;
    mutable int var;//表示可修改
public:
    const int* const Get_x() const{//修饰的是：当前对象 this 指针
        var=2;
        return m_x;
    }
    void set_x(int* x){
        m_x=x;
    }
};

void PrintEntity(const Entity& e){
    cout<<e.Get_x()<<endl;
}


int main(){
    const int MAX_AGE =90;

    const int *a=new int;
    int * const a=new int;
    *a=2;
    a=(int *)&MAX_AGE;//违背不变的承诺
    cout<<*a<<endl;
}