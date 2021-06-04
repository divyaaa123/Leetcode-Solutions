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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0) ;
        dummy->next=head;
        ListNode* t= head;
        int c=0;
        while(t!=NULL){
            c++;
            t=t->next;
        }
        t=dummy;
        int x=c-n;
        while(x>0){
            x--;
            t=t->next;
        }
   
      t->next=t->next->next;
        return dummy->next;
    }
};