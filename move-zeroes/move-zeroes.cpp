class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;){
            if(nums[i]==0){
                
                i++;
            }
            else{
                nums[j]=nums[i];
                i++;
                j++;
            }
        }
        for(;j<n;j++)
            nums[j]=0;
        return;
    }
};