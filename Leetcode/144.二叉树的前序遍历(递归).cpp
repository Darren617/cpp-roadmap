#include<iostream>
using namespace std;
#include<iostream>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a):val(a),left(nullptr),right(nullptr){};
};

void bianli(TreeNode* cur,vector<int> a){
    if(cur==nullptr){
        return;
    }
    a.push_back(cur->val);
    bianli(cur->left,a);
    bianli(cur->right,a);
   
}

class Solution{
public:
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> a;
        bianli(root,a);
        return a;
    }
};
TreeNode* buildTree(string s){
    
}

int main(){
    TreeNode *root= new TreeNode(1);
    root->left=nullptr;
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);
}



