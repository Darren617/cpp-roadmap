//给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果 target 存在返回下标，否则返回 -1。
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;int right =nums.size();
        //int mid =(left+right)/2;
        while(left<=right){
            int mid =(left+right)/2;
            if(target>nums[mid]){
                left=mid+1;
            }else if(target==nums[mid]){
                return mid;
            }
            else{
                right=mid-1;
            }
        }
        if(target==nums[left]){
            return left;
        }
        
        return -1;
    }
};
int main(){
    vector<int> nums{-1,0,3,5,9,12};
    int target=9;

    Solution so;
    int result=so.search(nums,target);
    cout<<result<<endl;
    return 0;
}