#include<iostream>
using namespace std;
#include<exception>
struct Myexception :public exception{//重写（override） 基类的虚函数 what()。这个函数返回异常的文本描述。
    const char * what() throw(){
        return "It's exception!";

    } 
};

int main(){
    try{
        throw Myexception();// 抛出自定义异常对象
    }
    catch(Myexception& e){// 先捕获派生类异常
        cout<<"Myexception caught"<<endl;
        cout<<e.what()<<endl;
    }
    catch(exception &e){// 再捕获基类异常（兜底）
        //其他错误
    }
}