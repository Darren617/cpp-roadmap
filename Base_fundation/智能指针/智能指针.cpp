#include<iostream>
using namespace std;
#include<string>
#include<memory>

class Entity{
public:
    Entity(){
        cout<<"created entity! "<<endl;
    }

    ~Entity(){
        cout<<"destroyed entity!"<<endl;
    }
    void print(){}
};

int main(){
    {
        //unique_ptr<Entity> entity(new Entity());
        unique_ptr<Entity> entity = make_unique<Entity>();//等价于Entity* ptr = new Entity();  unique_ptr 会自动 delete。
        shared_ptr<Entity> sharedEntity=make_shared<Entity>();
        entity->print();
    }
    cin.get();
}