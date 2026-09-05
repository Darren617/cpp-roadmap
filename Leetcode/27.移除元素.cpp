#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur,count=0;
        for(int i=0;i<nums.size();i++){
            cur=nums[i];
            while(i<nums.size()&&nums[i]==val){
                for(int j=i;j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
                count++;
                nums.resize(nums.size()-1);
            }
            
        }
        return count;
    }
};