#include<iostream>
#include<deque>
#include<vector>
using namespace std;
void printDeque(const deque<int>&d){
    for(int value:d){
        cout<<value<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> d1;
    //1.区间构造
    vector<int> v={10,20,30,40};
    deque<int> d2(v.begin(),v.end());
    
    //2. 使用指定数量和指定元素构造
    deque<int> d3(5,100);

    //3. 拷贝构造

    printDeque(d1);
    printDeque(d2);
    printDeque(d3);
    return 0;

}