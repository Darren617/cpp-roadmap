#include<iostream>
#include<memory>
using namespace std;

class Rectangle{
private:
    double width;
    double height;

public:
    Rectangle(double w,double h) :width(w),height(h){}
    ~Rectangle(){cout<<"对象被释放"<<endl;}
    double area(){
        return width*height;
    }
};

int main(){
    {
        unique_ptr<Rectangle> rec(new Rectangle(3.4,6.7));
        cout<<rec->area()<<endl;
    }
    return 0;
}
