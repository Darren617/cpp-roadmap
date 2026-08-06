#include<iostream>
using namespace std;
#include<stack>

class Solution{
public:
    bool isValid(string s){
        if(s.length()%2!=0){
            return false;
        }
        stack<char> temp;
        for(char c:s){
            if(c=='['){
                temp.push(']');
            }else if(c=='{'){
                temp.push('}');
            }else if(c=='('){
                temp.push(')');
            }else if(temp.empty() || c!=temp.top()){
                return false;
            }else{
                temp.pop();
            }
        }
        return temp.empty();
    }
};


