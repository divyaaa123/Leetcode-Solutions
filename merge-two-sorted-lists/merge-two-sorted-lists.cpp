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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * h1=l1, *h2=l2;
        ListNode dummy(INT_MIN);
        ListNode* ans= &dummy;
        while(h1 && h2){
            if(h1->val<h2->val){
                ans->next=h1;
                h1=h1->next;
            }
            else
            {
                ans->next=h2;
                h2=h2->next;
            }
            ans=ans->next;
        }
      ans->next=(h1)?h1:h2;
        return dummy.next;
        //Time Complexity: O(N+M)
        //Space Complexity: O(1)
    }
};