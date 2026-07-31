#include<iostream>
#include<memory>
using namespace std;

class Bread{
public:
    Bread(){
        cout<<"面包做好了"<<endl;
    }
    ~Bread(){cout<<"面包没了"<<endl;}
};

unique_ptr<Bread> makeBread(){
    return unique_ptr<Bread>(new Bread()); 
}

void eat(unique_ptr<Bread> bread){
    cout<<"面包被吃了"<<endl;
}


int main(){
    cout<<"开始"<<endl;
    auto upbread=makeBread();
    //eat(upbread);❌️错误写法，因为不能拷贝
    eat(move(upbread));//
    cout<<"结束"<<endl;
}








