#include<iostream>
using namespace std;
#include<vector>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a):val(a),left(nullptr),right(nullptr){};
};

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void traversal(TreeNode* root,int count){
        if(root->left==nullptr&&root->right==nullptr&&count==0){
            result.push_back(path);
            return;
        }
        if(root->left==nullptr&&root->right==nullptr){
            return;
        }

        if(root->left){
            count-=root->left->val;
            path.push_back(root->left->val);
            traversal(root->left,count);
            count+=root->left->val;
            path.pop_back();
        }
        if(root->right){
            count-=root->right->val;
            path.push_back(root->right->val);
            traversal(root->right,count);
            count+=root->right->val;
            path.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        result.clear();
        path.clear();
        if(root==nullptr) return result;
        path.push_back(root->val);
        traversal(root,targetSum);
        return result;
    }
};
