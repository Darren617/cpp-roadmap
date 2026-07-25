#include<iostream>
#include<cstring>
#include<utility>


using namespace std;
//三法则（Rule of Three）的经典示例

class rule_of_three{
    char * cstring;
public:
    explicit rule_of_three(const char* s=""):cstring(nullptr){//初始化成员列表
        if(s){
            cstring = new char[strlen(s)+1];
            strcpy(cstring,s);
        }
    }
    rule_of_three(const rule_of_three& other):cstring(other.cstring ? new char[strlen(other.cstring)+1] : nullptr){
        if(cstring) strcpy(cstring,other.cstring);
    }

    ~rule_of_three(){
        delete[] cstring;
    }
    rule_of_three& operator=(const rule_of_three& other){
        rule_of_three temp(other);
        std::swap(cstring,temp.cstring);
        return *this;
    }

    const char* c_str() const{//accessor
        return cstring;
    }
};

class String{
private:
    char *data;
public:
    String(const char*s){
        data=new char[strlen(s)+1];
        strcpy(data,s);
    }
    ~String(){
        delete[] data;
    }
};

int main(){
    //String a("hello");
    //String b=a;浅拷贝，会造成两次delete同一块区域
    rule_of_three o1{"abc"};
    cout<<o1.c_str()<<' ';
    auto o2{o1};
    cout<<o2.c_str()<<' ';
    rule_of_three o3("def");
    cout<<o3.c_str()<<'\n';

}