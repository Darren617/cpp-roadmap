#include<iostream>
using namespace std;
#include<vector>

int main(){
    std::vector<int> myVector;
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


