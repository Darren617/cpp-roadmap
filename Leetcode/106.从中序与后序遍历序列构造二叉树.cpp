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
    void print(vector<int> a,string n){
        cout<<n<<"=[";
        for(int i=0;i<a.size();i++){
            cout<<a[i];
            if(i<a.size()-1) cout<<",";
        }
        cout<<"]"<<endl;
    }
    TreeNode* traversal(vector<int>& inorder, vector<int>& postorder){
        if(postorder.size()==0){
            return nullptr;
        }
        TreeNode* root=new TreeNode(postorder[postorder.size()-1]);

        //叶子节点
        if(postorder.size()==1){
            return root;
        }
        int rootval=postorder[postorder.size()-1];
        int index=0;
        for(int index=0;index<inorder.size();index++){
            if(inorder[index]==rootval){
                break;
            }
        }
        vector<int> inorder_left(inorder.begin(),inorder.begin()+index);//左中序数组
        vector<int> inorder_right(inorder.begin()+index+1,inorder.end());//右中序数组

        //舍弃末尾元素
        postorder.resize(postorder.size()-1);
        vector<int> postoder_left(postorder.begin(),postorder.begin()+inorder_left.size());//左后序数组
        vector<int> postoder_right(postorder.begin()+inorder_left.size(),postorder.end());//右后序数组
        
        //print(inorder_left,"inorder_left");
        //print(postoder_left,"postoder_left");
        //print(inorder_right,"inorder_right");
        //print(postoder_right,"postoder_right");

        root->left=buildTree(inorder_left,postoder_left);
        root->right=buildTree(inorder_right,postoder_right);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        if(inorder.size()==0||postorder.size()==0){
            return nullptr;
        }
        return traversal(inorder,postorder);
    }
};