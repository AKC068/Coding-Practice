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
vector<int> inorderTraversal(TreeNode* head) {
        TreeNode* curr=head;
    while(curr!=NULL){
        if(curr->left==NULL){
            ans.push_back(curr->val);
            curr=curr->right; //        (3nd explanation)here while curr is going to curr->right we'll get the curr again. In this way it gets retured to its previous position. 
            //      This line is actually for curr to point on its previous position, not on its actual right, as curr gets stored in curr->right. (next explanation above in last else case)
        }else{
            TreeNode* prev=curr->left;      
            while(prev->right && prev->right != curr){
                prev=prev->right;
            }
            if(prev->right==NULL){
                prev->right=curr; //        (start of explanation)as the prev->right is pointing on curr, which means curr->left->right is pointing on curr itself and this gets stored which helps when curr in returing to its previous position. (next explanation below)
                curr=curr->left; //        (2nd explanation)after curr is moved to next left, then there we will get curr in curr->right as it was stored. (next explanation above in 1st if case)
            }else{
                prev->right=NULL;   // As we have left prev->right pointing to curr, its necessary to remove this thread.
                ans.push_back(curr->val);   // This curr is pointing at returned position which will be eventually root of that subtree.
                curr=curr->right; //        (4th explanation)Now when it is returned, it will be pointing on its actual right.
            }
        }
    }
        return ans;
}

int main(){
    vector<int> array={1,2,NULL,NULL,3,4,5};
    // vector<int> array={1,2,3,4,5};
    int n = array.size();
    create(array,n);
    array=inorderTraversal(root);
    for(auto i:array){
        cout<<i<<" ";
    }
    return 0;
}