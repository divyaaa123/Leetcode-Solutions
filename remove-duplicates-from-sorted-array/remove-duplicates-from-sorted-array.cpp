class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j=0;
        int n=nums.size();
        if (n==0)
            return 0;
        for(int i=1;i<n;i++){
            if(nums[j]==nums[i])
                continue;
            j++;
            nums[j]=nums[i];
        }
        return j+1;
    }
};