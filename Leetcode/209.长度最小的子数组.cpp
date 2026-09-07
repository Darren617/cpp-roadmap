#include<iostream>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result=INT32_MAX;// 最终结果
        int sublength=0;//子数组长度
        int sum=0;//子数组元素之和
        int j=0;//窗口起始位置 
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                sublength=i-j+1;
                result=result>sublength?sublength:result;
                sum-=nums[j];
                j++; 
            }
            
        }
        return result==INT32_MAX ? 0 : result;
    }
};
