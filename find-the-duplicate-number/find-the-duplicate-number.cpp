class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            c=abs(nums[i]);
            if(nums[c-1]<0)
                return c;
            nums[c-1]=-nums[c-1];
        }
        return -1;
    }
};