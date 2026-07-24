#include<iostream>
using namespace std;

class Entity{
public:
    Entity(){
        cout<<"created entity!"<<endl;
    }

    ~Entity(){
        cout<<"destroyed entity!"<<endl;
    }
};
//作用域指针
class Scopedptr{
private:
    Entity *m_ptr;
public:
    Scopedptr(Entity * ptr):m_ptr(ptr){

    }   
    
    ~Scopedptr(){
        delete m_ptr;
    }
};

int main(){
    //Entity e;
    Scopedptr e(new Entity());//栈对象，受作用域管控
    //Entity* e=new Entity();//普通裸指针
    cin.get();
    //delete e;
}