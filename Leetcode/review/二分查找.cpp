#include<iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){//[a,b)
            int mid=(left+right)/2;
            if(target>nums[mid]){
                left=mid+1;
            }else if(target<nums[mid]){
                right=mid-1;
            }else if(target==nums[mid]){
                return mid;
            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int> nums={-1,0,3,5,9,12};
    int result=sol.search(nums,9);
    cout<<result<<endl;
    return 0;

}