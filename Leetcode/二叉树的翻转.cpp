#include<iostream>
using namespace std;
#include<vector>
#include<deque>

struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int a):val(a),left(nullptr),right(nullptr){}
};
//层序遍历
treeNode* exchange_cx(treeNode* root){
    deque<treeNode*> deq;
    deq.push_back(root);
    while(!deq.empty()){
        int size=deq.size();
        while(size--){
            treeNode* cur=deq.front();
            deq.pop_front();
            treeNode* temp=cur->left;
            cur->left=cur->right;
            cur->right=temp;
            if(cur->left) deq.push_back(cur->left);
            if(cur->right) deq.push_back(cur->right);
        }
    }
    return root;
}
/*递归写法*/
treeNode* dg(treeNode* root){
    if(root==nullptr) return root;
    swap(root->left,root->right);//中
    dg(root->left);//左
    dg(root->right);//右
}
