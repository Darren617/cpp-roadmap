#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的 字母异位词。
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
        
    }
};
int main(){
    Solution sol;

}








