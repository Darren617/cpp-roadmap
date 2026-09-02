#include<iostream>
using namespace std;
#include<deque>

struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int a):val(a),left(nullptr),right(nullptr){};
};

class Solution{
public:
    vector<vector<int>> preorderTraversal(treeNode *root){
        vector<vector<int>> result;
        
        deque<treeNode*> deq;
        if(root!=nullptr){
            deq.push_back(root);
            
        }
        while(!deq.empty()){
            int size=deq.size();
            vector<int> vec;
            while(size--){
                auto cur=deq.front();
                deq.pop_front();
                vec.push_back(cur->val);
                if(cur->left) deq.push_back(cur->left);
                if(cur->right) deq.push_back(cur->right);

            }
            result.push_back(vec);
            
            
        }
        return result;
    }
};
int main(){
    
}