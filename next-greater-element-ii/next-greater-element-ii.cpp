class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         vector<int> v(nums.size(),0);
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--){
            if(st.empty())
            {
                v[i]=-1;
                
            }
            else{
            while(!st.empty() && st.top()<=nums[i])
                st.pop();
            if(!st.empty())
                v[i]=st.top();
            else
                v[i]=-1;
                }
            st.push(nums[i]);
        }
         for(int i=nums.size()-1;i>=0;i--){
            if(st.empty())
            {
                v[i]=-1;
                
            }
            else{
            while(!st.empty() && st.top()<=nums[i])
                st.pop();
            if(!st.empty())
                v[i]=st.top();
            else
                v[i]=-1;
                }
            st.push(nums[i]);
        }
   
      return v;
//Time: O(N)
//Space: O(N)
    }
};