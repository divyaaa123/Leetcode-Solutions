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
       bool l=0,r;
        bool m=helper(root->left,p,q);
        bool n= helper(root->right,p,q);
       // int mid=0;
       if(root==p || root==q)
           l=true;
      
       // cout<<root->val<<" "<<m<<" "<<n<<"\n";
       if(l+m+n==2)
           ans=root;
      
       bool x=(l+m+n>=1);

       return x;
    }
};