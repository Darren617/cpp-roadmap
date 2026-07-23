#include<iostream>
using namespace std;
#include<vector>

int main(){
    std::vector<int> myVector;
    //声明与初始化
    vector<int> vec1;  // 空的vector
    vector<int> vec2(5);  // 长度为5的vector，元素默认初始化
    vector<int> vec3(10);  // 长度为5的vector，元素值为10
    vector<int> vec4{1,2,3,4};  // 使用初始化列表初始化

    myVector.push_back(10);
    int firstElement=myVector[0];
    size_t size=myVector.size();
    cout<<firstElement<<endl;
    cout<<size<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout<<"vector contains:";
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<endl;
    }
    cout<<endl;

    cout<<"the first element is: "<<numbers[0]<<endl;
    numbers.clear();

    if(numbers.empty()){
        cout<<"The vector is now empty." << endl;
    }
    return 0;


}


