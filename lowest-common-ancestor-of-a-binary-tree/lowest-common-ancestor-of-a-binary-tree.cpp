/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
 TreeNode* ans;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       
        ans=NULL;
        helper(root,p,q);
        return ans;
    }
  
   bool helper(TreeNode* root, TreeNode* p, TreeNode* q){
           if(root==NULL)
            return false;
        int left=helper(root->left,p,q);
        int right= helper(root->right,p,q);
       int mid=0;
       if(root==p || root==q)
           mid=1;
       if(mid+left+right==2)
           ans=root;
  
       return (mid+left+right>0);
    }
};