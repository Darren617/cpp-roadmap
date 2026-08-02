#include<iostream>
using namespace std;
#include<memory>

class Entity{
public:
    Entity(){
        cout<<"created "<<endl;
    }
    ~Entity(){
        cout<<"destroyed "<<endl;
    }
    void print(){
        cout<<"hello ~ "<<endl;}

};

int main(){
    weak_ptr<Entity> weak;
    {
        auto shared = make_shared<Entity>();
        weak =shared;

        cout<<"use count:"<<shared.use_count()<<endl;

        auto temp=weak.lock();
        if(temp){
            temp->print();  
        }
    }
    auto temp =weak.lock();
    if(!temp){
        cout<<"object destroyed "<<endl;
    }
}