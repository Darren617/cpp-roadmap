//设计一个类模版有数据成员 T data[size],有求最大值的方法 getMax()和排序方法 sort(),模版参数 T 可以实例化成 int、char、double、float、string。
#include<iostream>
using namespace std;

template<class T,int size>
class Data{
private:
    T data[size];
public:
    Data(){
        cout<<"input "<<size<<"datas: "<<endl;
        for(int i=0;i<size;i++){
            cin>>data[i];
        }
    }
    void show(){
        cout<<"data:"<<endl;
       for(int i=0;i<size;i++){

            cout<<data[i]<<"\t";
        }
        cout<<endl;
    }
    T getMax();
    void insertSort();
};

template<class T,int size>
T Data<T,size>::getMax(){
    T maxx=data[0];
    for(int i=0;i<size;i++){
        if(data[i]>maxx){maxx=data[i];}
    }
    return maxx;
}

template<class T,int size>
void Data<T,size>::insertSort(){
    for(int i=1;i<size;i++){
        T temp=data[i];
        int j=i-1;//代表前i-1个是排好的
        while(j>=0&&temp<data[j]){
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=temp;


    }
}

int main(){
    Data<int,5> d;
    d.show();
    cout<<d.getMax()<<endl;
    d.insertSort();
    d.show();

}


