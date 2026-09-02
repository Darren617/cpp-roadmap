#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a):val(a),left(nullptr),right(nullptr){}
};

bool compare(TreeNode *left,TreeNode* right){
    if(left==NULL&&right!=NULL)return false;
    else if(left!=NULL&&right==NULL) return false;
    else if(left==NULL&&right==NULL) return true;
    else if(left->val!=right->val) return false;

    bool outside=compare(left->left,right->right);
    bool inside=compare(left->right,right->left);
    return outside&&inside;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool flag=compare(root->left,root->right);
        return flag;
    }
};