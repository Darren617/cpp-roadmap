#include<iostream>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a):val(a),left(nullptr),right(nullptr){}
};
class Solution {
public:
    int gethigh(TreeNode* node){
        int result;
        if(node==nullptr) return 0;
        int lefthigh=gethigh(node->left);
        int righthigh=gethigh(node->right);
        if(lefthigh==-1)return -1;
        if(righthigh==-1)return -1;
        if(abs(lefthigh-righthigh)>1){
            result=-1;
        }else{
            result=1+max(lefthigh,righthigh);
        }
        return result;
    }
    bool isBalanced(TreeNode* root) {
        if(gethigh(root)==-1){
            return false;
        }else{
            return true;
        }
    }
};

