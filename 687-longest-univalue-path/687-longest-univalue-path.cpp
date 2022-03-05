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
    int ans=0;
    int longestUnivaluePath(TreeNode* root) {
       helper(root);
        return ans;
    }
    int helper(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int l=0, r=0;
        int left=0, right=0;
        l=helper(root->left);
        r=helper(root->right);
        if(root->left && ((root->left->val==root->val)))
            left=l+1;
        if(root->right && ((root->right->val==root->val)))
            right=r+1;
        ans=max(ans,left+right);
        return max(left,right);
    }
};