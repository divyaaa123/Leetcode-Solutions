/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL)
            return NULL;
        return util(head,NULL);
    }
    TreeNode* util(ListNode* head, ListNode* x) {
        if(head==NULL)
            return NULL;
        if(head==x)
            return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
          
        while(fast!=x && fast->next!=x){
       
            slow=slow->next;
            fast=fast->next->next;
        }
        TreeNode* node=new TreeNode(slow->val );
        //   cout<<node->val;
      
        node->left=util(head, slow);
        node->right=util(slow->next, x);
        return node;
    }
};
//Time: O(NlogN)
//space: O(N)
