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
      int preorderIndex;
        map<int,int> inorderIndex;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      preorderIndex=0;
        for(int i=0;i<inorder.size();i++)
            inorderIndex[inorder[i]]=i;
        return help(preorder,0,preorder.size()-1);
        
    }
    private: TreeNode* help(vector<int> preorder,int left,int right){
        if(left>right)
            return NULL;
        int rootValue= preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootValue);
        root->left = help(preorder,left, inorderIndex[rootValue]-1);
        root->right= help(preorder, inorderIndex[rootValue]+1,right);
        return root;
    }
};