#include<iostream>
using namespace std;
#include<vector>
#include<deque>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        deque<TreeNode*> que;
        if(root!=nullptr){
            que.push_back(root);
        }
        while(!que.empty()){
            vector<int> vec;
            int size=que.size();
            while(size--){
                TreeNode* cur=que.front();
                que.pop_front();
                vec.push_back(cur->val);
                if(cur->left) que.push_back(cur->left);
                if(cur->right) que.push_back(cur->right);
            }
            result.push_back(vec);
        }
    }
};