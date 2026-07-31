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
    shared_ptr<Rectangle> p1(new Rectangle(3.4,6.7));
    shared_ptr<Rectangle> p2=p1;
    shared_ptr<Rectangle> p3(p2);

    cout<<p1.use_count()<<endl;
}