#include<iostream>
using namespace std;
#include<deque>
#include<vector>

struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int v):val(v),left(nullptr),right(nullptr){}
};

void qxbl(treeNode* root,vector<int>& result){
    
    if(root==nullptr) return;
    result.push_back(root->val);
    qxbl(root->left,result);
    qxbl(root->right,result);
    
}
void cxbl(treeNode* root,vector<int> & result){
    deque<treeNode*> deq;
    treeNode* cur;
    deq.push_back(root);
    if(root==nullptr){
        return;
    }
    while(!deq.empty()){
        int size=deq.size();
        treeNode* cur;
        while(size--){
            cur=deq.front();
            deq.pop_front();
            result.push_back(cur->val);
            if(cur->left){
                deq.push_back(cur->left);
            }
            if(cur->right){
                deq.push_back(cur->right);
            }
        }
    }
}

void print(vector<int> a){
    
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i<a.size()-1){
            cout<<" ";
        }
    }
    cout<<endl;

}

treeNode* traversal(vector<int> &postorder,vector<int>& inorder){
    if(postorder.size()==0 || inorder.size()==0){
        return nullptr;
    }
    int rootvalue=postorder[postorder.size()-1];
    treeNode* root=new treeNode(rootvalue);
    if(postorder.size()==1){
        return root;
    }
    int index=0;
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==rootvalue){
            index=i;
            break;
        }
    }
    vector<int> inorder_left(inorder.begin(),inorder.begin()+index);
    vector<int> inorder_right(inorder.begin()+index+1,inorder.end());

    //
    postorder.resize(postorder.size()-1);
    vector<int> postod_left(postorder.begin(),postorder.begin()+inorder_left.size());
    vector<int> postod_right(postorder.begin()+inorder_left.size(),postorder.end());

    root->left=traversal(postod_left,inorder_left);
    root->right=traversal(postod_right,inorder_right);

    
    return root;
            
}


int main(){
    int n;
    cin>>n;
    vector<int> inorder(n);
    vector<int> postorder(n);
    for(int i=0;i<n;i++){
        cin>>postorder[i];
    }
    for(int i=0;i<n;i++){
        cin>>inorder[i];
    }
    //cout<<inorder[0]<<endl;
    //cout<<postorder[1]<<endl;
    treeNode* root=traversal(postorder,inorder);
    
    vector<int> result;
    qxbl(root,result);
    print(result);
    //cout<<result[1]<<endl;
    vector<int> cx_re;
    cxbl(root,cx_re);
    print(cx_re);
    
    return 0;

}