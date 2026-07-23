//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

/*暴力破解*/

class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int cur=i;
            for(int j=i+1;j<nums.size();j++){
               
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
                
            }
        }
        return {};
    }
    //hash表法
    vector<int> twoSum2(vector<int>& nums,int target){
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];

            //查找需要的数字
            if(hash.find(need)!=hash.end()){
                return {hash[need],i};
            }
            hash[nums[i]]=i;
        }
        return {};
    }

    void print(vector<int> vec){
        cout<<"[";
        for(int i=0;i<vec.size();i++){
            if(i>0) cout<<",";
            cout<<vec[i];
        }
        cout<<"]";
        cout<<endl;
    }
};




int main(){
    vector<int> nums{2,7,11,15};
    Solution sol;
    cout<<"vector is: ";
    sol.print(nums);cout<<endl;
    cout<<"target is: 9"<<endl;
    vector<int> ans =sol.twoSum2(nums,9);
    sol.print(ans);
    return 0;
}



