class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
             max_so_far+=nums[i];
            
                m=max(m,max_so_far);
                
            if(max_so_far<0)
                max_so_far=0;
           
        }
        return m;
    }
};