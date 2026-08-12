#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        for(int i=0;i<temperatures.size();i++){
            int d=0;
            int cur=temperatures[i];
            int t=0;//是否找到更大的
            for(int j=i;j<temperatures.size();j++){
                
                if(temperatures[j]>cur){
                    t=1;
                    result.push_back(d);
                    break;
                }else{
                    d++;
                }
                
            }if(t==0){
                    result.push_back(0);
            }
        }
        return result;
    }
};