class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]&1){
                swap(nums[l],nums[r]);
                r--;
            }
            else
                l++;
            
        }
        return nums;
    }
};
//Time: O(N)
//Space: O(1)