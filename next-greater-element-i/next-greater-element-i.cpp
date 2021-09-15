class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        stack<int> st;
        map<int,int> m;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty())
            {
                m[nums2[i]]=-1;
                
            }
            else{
            while(!st.empty() && st.top()<nums2[i])
                st.pop();
            if(!st.empty())
                m[nums2[i]]=st.top();
            else
                m[nums2[i]]=-1;
                }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            v.push_back(m[nums1[i]]);
        }
       return v;
    }
};
//Time: O(N)
//Space: O(N)