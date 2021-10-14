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
    TreeNode* sortedListToBST(ListNode* A) {
     ListNode* B=NULL;
    return sortedListToBSTHelper(A,B);
    }
    TreeNode* sortedListToBSTHelper(ListNode* left, ListNode* right) {
  if(left==right)
  return NULL;
    if(left==NULL )
    return NULL;
  ListNode* m=middle(left, right);
  TreeNode* t= new TreeNode(m->val);
    t->left=sortedListToBSTHelper(left,m);
  t->right=sortedListToBSTHelper(m->next,right);
    return t;
}
ListNode* middle(ListNode* head,ListNode* A){
    ListNode* fast=head, *slow=head;
    while(fast!=A && fast->next!=A){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
};
//Time: O(NlogN)
//space: O(logN)
