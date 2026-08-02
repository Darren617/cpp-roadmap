#include<iostream>
#include<string>
using namespace std;

char lower(char a){
    if(a>='A'&&a<='Z'){
        return a+('a'-'A');
    }
    return a;
}
class Solution {
public:
    bool isLatter(char a){
        if(!((a>='a' && a<='z' )||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))){
            return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while(i<j&&!isLatter(s[i])){
                i++;
            }
            while(i<j&&!isLatter(s[j])){
                j--;
            }
            
            if(lower(s[i])!=lower(s[j])){
                cout<<"false"<<endl;
                return false;
            }
            i++;
            j--;
        }
        cout<<"true"<<endl;
        return true;
    }
};

int main(){
    Solution sol;
    string s="0P";
    cout<<sol.isPalindrome(s)<<endl;
}