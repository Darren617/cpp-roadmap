#include<iostream>
using namespace std;

struct Base{
    virtual void f(){
        cout<<"base\n";
    }
};

struct Derived: Base{
    void f() override{
        cout<<"derived\n";
    }
};
class B{
    virtual void do_f();
public:
    void f(){
        do_f();
    }

};

struct D :public B{
    void do_f() override;
};






int main(){
    Base b;
    Derived d;

    Base& br= b;
    Base& dr= d;
    br.f();
    dr.f();

    D d;
    B* bp= &d;
}

