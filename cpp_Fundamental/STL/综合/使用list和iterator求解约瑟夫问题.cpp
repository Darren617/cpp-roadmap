#include<iostream>
#include<list>
using namespace std;

int main(){
    int m,n;
    cout << "请输入小孩的个数和要报的数：";
    cin>>m>>n;
    list<int> children;
    for(int i=0;i<m;i++){
        children.push_back(i);
    }
    list<int> ::iterator current;
    current=children.begin();

    while(children.size()>1){
        for(int i=0;i<m;i++){
            current++;
            if(current==children.end()){
                current=children.begin();
            }
        }
        current=children.erase(current);//删除当前current，迭代器指向下一个元素.
        if(current==children.end()){
                current=children.begin();
        }
    }
    
    cout<<endl;
    cout<<"最终留下的为："<<*current<<endl;
    return 0;
}





