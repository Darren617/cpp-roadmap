#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a):val(a),left(nullptr),right(nullptr){};
};

class Solution {
public:
    bool traversal(TreeNode* root, int targetSum){
        if(targetSum==0 && root->left==nullptr&&root->right==nullptr){
            return true;
        }
        if(root->left==nullptr&& root->right==nullptr){
            return false;
        }
        if(root->left==nullptr&& root->right==nullptr&&targetSum-root->val==0){
            return true;
        }
        if(root->left){
            targetSum-=root->left->val;
            if (traversal(root->left,targetSum)) return true;
            targetSum+=root->left->val;//回溯
        }                
        if(root->right){
            targetSum-=root->right->val;
            if (traversal(root->right,targetSum)) return true;
            targetSum+=root->right->val;//回溯
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        return traversal(root,targetSum-root->val);
        
    }
};






