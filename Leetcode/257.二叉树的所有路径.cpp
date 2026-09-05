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
    vector<int> path;
    vector<string> result;

    void travesal(TreeNode* root,vector<int>&path,vector<string> &result){
        path.push_back(root->val);//中
        string res="";
        if(root->left==nullptr&&root->right==nullptr){
            for(int i=0;i<path.size();i++){
                res+=path[i]+'0';
                if(i<path.size()-1){
                    res+="->";
                }
            }
            result.push_back(res);
            return;
        }
        //左
        if(root->left){
            travesal(root->left,path,result);
            path.pop_back();
        }
        //右
        if(root->right){
            travesal(root->right,path,result);
            path.pop_back();
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        travesal(root,path,result);
        return result;
    }
};