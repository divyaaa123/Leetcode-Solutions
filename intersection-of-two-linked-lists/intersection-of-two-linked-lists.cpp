/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* listA=headA, *listB=headB;
        
        while(listA->next ){
            listA=listA->next;
           
        }
         while(listB->next ){
            listB=listB->next;
           
        }
        if (listA!=listB)
            return NULL;
        while(headA ){
        ListNode* temp=headB;
        while(temp){
            if(headA==temp)
                return temp;
            temp=temp->next;
        }
            headA=headA->next;
        }
        return NULL;
    }
};