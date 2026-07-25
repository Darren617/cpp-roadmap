#include<iostream>
using namespace std;
#include<vector>
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
int main(){
    vector<int> nums={0,1,0,3,12};
    int count=0;//0的个数
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count++;
        }
    }

    //开始移动
    int initial=nums.size()-1;
    int i=0;
    while(i<=initial){
        if(nums[i]==0){
            for(int j=i;j<initial;j++){
                swap(nums[j],nums[j+1]);
            }
            initial--;
        }else{
            i++;
        }

    }
    cout<<"移动后："<<endl;
    cout<<"[";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
        if(i!=nums.size()-1){
            cout<<",";
        }

    }
    cout<<"]"<<endl;
    return 0;


}