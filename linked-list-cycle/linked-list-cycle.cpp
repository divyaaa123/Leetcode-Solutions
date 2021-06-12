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
    bool hasCycle(ListNode *head) {
        set<ListNode*> s;
        ListNode* t=head;
        while(t!=NULL){
            if(s.find(t)!=s.end())
                return true;
            s.insert(t);
            t=t->next;
        }
        return false;
    }
};