class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
     int c= nums.size();
        for(int i=0;i<nums.size();i++){
            c^=i^nums[i];
        }
        return c;
    }
};