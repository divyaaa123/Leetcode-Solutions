/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
      if(root==NULL)
    return {};
    vector<int> v;
   // Your code here
   queue<TreeNode*> s;
   s.push(root);
    while(!s.empty()){
        int x=s.size();
        for(int i=0;i<x;i++){
            TreeNode* temp=s.front();
            s.pop();
            if(i==x-1)
            v.push_back(temp->val);
            if(temp->left!=NULL)
            s.push(temp->left);
            if(temp->right!=NULL)
            s.push(temp->right);
        }
    }
    return v;
    }
};