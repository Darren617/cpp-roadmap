#include<iostream>
using namespace std;
#include<string>

class Entity{
private:
    string m_name;
    mutable int m_debugCount=0;

public:
    const string& get_name() const{// const对象调用，只读
        m_debugCount++;
        return m_name;
    }
};

int main(){
    const Entity e;
    e.get_name();

    int x=8;
    auto f = [=] () mutable{
        x++;
        cout<<"hello"<<endl;
    };
    //x=8;如果改为捕获引用[&]，那么为9
    f();
}