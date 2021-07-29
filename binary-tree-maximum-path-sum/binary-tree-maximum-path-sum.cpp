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
    int m=INT_MIN;
    int maxPathSum(TreeNode* root) {
        int l=maxutil(root);
       if(root->right==NULL || root->left==NULL)
       m=max(m,l);
        return m;
    }
   
    int maxutil(TreeNode* root){
         if(root==NULL){
            return 0;
        }
        int l=maxutil(root->left);
        int r=maxutil(root->right);
    //      if(root->left==NULL && root->right==NULL)
    // return root->val;
    // if(root->left==NULL)
    // return r+root->val;
    // if(root->right==NULL)
    // return l+root->val;
    m=max(l+r+root->val,m);
        m=max(m,max(l,r)+root->val);
        m=max(m,root->val);
        return max(root->val,max(l,r)+root->val); 
    }
};