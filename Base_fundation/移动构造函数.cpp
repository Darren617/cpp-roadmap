#include<iostream>
using namespace std;
#include<cstring>

class Stu{
private:
    int m_age;
    char *m_name;

public:
    Stu(int age,const char * name){
        m_age=age;
        m_name=new char[strlen(name)+1];
        strcpy(m_name,name);
        cout<<"我是有参构造函数。"<<endl;

    }

    Stu(const Stu & other){
        m_age=other.m_age;
        //浅拷贝写法
        //m_name=oher.m_name

        //深拷贝
        m_name=new char[strlen(other.m_name)+1];
        strcpy(m_name,other.m_name);
    }
    Stu(Stu&& other){
        m_age=other.m_age;
        m_name=other.m_name;
        other.m_name=nullptr;
    }
    void setName(const char *n){
        if (m_name!=nullptr)
        {
            delete m_name;
        }
        
        m_name=new char[strlen(n)+1];
        strcpy(m_name,n);
    }


    char * getName(){
        return m_name;
    }
    int getAge(){
        return m_age;
    }

   
};
void show(Stu& s){
    cout<<s.getAge()<<" "<<s.getName()<<endl;
}

int main(){
    Stu maye(18,"maye");
    Stu nan(move(maye)); //maye不可以再使用了，因为他的内存给了nan
    maye.setName("fk");//已经不能设置了
    show(maye);
    show(nan);
    return 0;

}