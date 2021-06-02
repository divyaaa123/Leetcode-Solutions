class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                a.push_back(nums1[i++]);
            }
            else
            {
                a.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()){
            a.push_back(nums1[i++]);
        }
         while(j<nums2.size()){
            a.push_back(nums2[j++]);
        }
        int n=nums1.size()+nums2.size();
        if(n%2!=0){
            return a[n/2] + 0.0;
        }
        else
        {
            return (a[(n-1)/2]+ a[(n+1)/2] + 0.0)/2;
        }
    }
};