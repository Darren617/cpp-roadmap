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
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int lefthigh=maxDepth(root->left);//左
        int righthigh=maxDepth(root->right);//右
        int result=1+max(lefthigh,righthigh);//中
        return result;
    }
};