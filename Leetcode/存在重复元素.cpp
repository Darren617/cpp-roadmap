#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
int main(){
    vector<int> nums={1,2,3,4};
    //先排序，再对比
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
       if(nums[i]==nums[i+1]){
            cout<<"true";
            return true;
       }
    }
    cout<<"false";
    return false;

}





