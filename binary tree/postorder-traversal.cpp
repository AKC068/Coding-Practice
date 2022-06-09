#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};
TreeNode* root;

void create(vector<int> array, int n){
    queue<TreeNode*> q;
    TreeNode *t, *d;
    int i=0;
    root=new TreeNode;
    root->val=array[0];
    root->left=NULL; root->right=NULL;
    q.push(root);
    
    while(!q.empty()) {
        d=q.front();
        q.pop();
        i++;
        if(array[i] && i<n){
            t=new TreeNode;
            t->val=array[i];
            t->left=NULL; t->right=NULL;
            d->left=t;
            q.push(t);
        }
        i++;
        if(array[i] && i<n){
            t=new TreeNode;
            t->val=array[i];
            t->left=NULL; t->right=NULL;
            d->right=t;
            q.push(t);
        }
    }
}

vector<int> ans;
vector<int> postorderTraversal(TreeNode* head) {
        if(head==NULL){
            return ans;
        }
        postorderTraversal(head->left);
        postorderTraversal(head->right);
        ans.push_back(head->val);
        return ans;
}

int main(){
    vector<int> array={1,2,3,NULL,NULL,4,5};
    // vector<int> array={1,2,3,4,5};
    int n = array.size();
    create(array,n);
    array=postorderTraversal(root);
    for(auto i:array){
        cout<<i<<" ";
    }
    return 0;
}