class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ones=0, two=0;
        for(int i=0;i<nums.size();i++){
            ones= (ones^nums[i]) & ~two;
            two= (two^nums[i]) & ~ones;
        }
        return ones;
    }
    
};