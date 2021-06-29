class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                m=max(m,c);
                c=0;
            }
            else
                c++;
        }
        return max(m,c);
    }
};