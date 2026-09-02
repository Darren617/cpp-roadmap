#include<iostream>
using namespace std;
#include<vector>
#include<stack>

struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int a):val(a),left(nullptr),right(nullptr){};
};

/*前、后
class Solution{
public:
    vector<int> preorderTraversal(treeNode* root){
        vector<int> a;
        stack<treeNode*> st;
        if(root==nullptr) return a;
        st.push(root);
        while(!st.empty()){
            auto node=st.top();
            st.pop();
            a.push_back(node->val);
            if(node->right) st.push(node->right);//空节点不入栈
            if(node->left) st.push(node->left);
            
        }
        return a;
    }
};*/

//中序
class Solution{
public:
    vector<int> preorderTraversal(treeNode *root){
        vector<int> a;
        stack<treeNode*> st;
        st.push(root);
        treeNode *cur=root;
        while(!st.empty() && cur!=nullptr){
            if(cur!=nullptr){
                cur=cur->left; //左
                st.push(cur);
            }else{
                cur=st.top();
                a.push_back(cur->val);//中
                st.pop();
                cur=cur->right;//右
                st.push(cur);
                
            }
        }
        return a;
    }
};



