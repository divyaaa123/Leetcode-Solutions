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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        return h(root,0);
    }
    int h(TreeNode* root, int l){
          if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL && l)
            return root->val;
        if(root->left==NULL && root->right==NULL)
            return 0;
        return h(root->left,1)+h(root->right,0);
    }
};
//Space: O(N)
//Time: O(N)