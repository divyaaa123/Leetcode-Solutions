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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
      priority_queue<vector<int>, vector<vector<int>>,greater<vector<int>>> pq;
        for(int i=0;i<arr.size();i++){
            if(arr[i]){
                pq.push({arr[i]->val,i});
            arr[i]=arr[i]->next;
            }
        }
        ListNode* ans=new ListNode(0);
        ListNode* res=ans;
        while(!pq.empty()){
            vector<int> v=pq.top();
            pq.pop();
            int element=v[0];
            ans->next=new ListNode(element);
            ans=ans->next;
            if(arr[v[1]]!=NULL){
                pq.push({arr[v[1]]->val,v[1]});
                arr[v[1]]=arr[v[1]]->next;
            }
        }
        return res->next;
//         priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
//         for(int i=0;i<arr.size();i++){
//             pq.push({arr[i]->val,i,0});
//             arr[i]=arr[i]->next;
//         }
//        ListNode* ans=NULL;
//         ListNode* head;
//         while(!pq.empty()){
//             vector<int> x=pq.top();
//             pq.pop();
            
//             int element=x[0];
//           //  cout<<element;
//             int a_ind=x[1];
//             int b_ind=x[2];
//             ans.push_back(element);
//             b_ind++;
//             if(b_ind<(arr[a_ind]!=NULL)){
//                 pq.push({arr[a_ind]->val,a_ind,b_ind});
//                 arr[a_ind]=arr[a_ind]->next;
//             }
//         }
//         return ans;
    }
   
};
//time complexity: O(NlogK)
//space complexity: O(N)