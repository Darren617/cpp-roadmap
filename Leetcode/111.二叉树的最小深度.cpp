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
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int lefthigh=minDepth(root->left);
        int righthigh=minDepth(root->right);
        //防止子树为空的情况：
        if(lefthigh==0&&righthigh!=0){
            return righthigh+1;
        }
        if(lefthigh!=0&&righthigh==0){
            return lefthigh+1;
        }
        
        int result=min(lefthigh,righthigh);
        return result+1;
    }
};





