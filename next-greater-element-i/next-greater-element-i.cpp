class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            int j=0;
            for(j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                    break;
            }
            int m=-1;
            for(;j<nums2.size();j++){
                if(nums2[j]>nums1[i])
                {
                    m=nums2[j];
                    break;
                }
            }
            v.push_back(m);
        }
        return v;
    }
};
//Time: O(N^2)
//Space: O(1)