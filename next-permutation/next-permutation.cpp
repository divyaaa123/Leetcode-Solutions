class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int c=0;
        int i=0;
        int y=-1;
        for(i=nums.size()-1;i>=0;i--){
            for(int j=nums.size()-1;j>i;j--){
                if(nums[j]>nums[i]){
                    swap(nums[j],nums[i]);
                    c=1;
                    y=i+1;
                    break;
                }
            }
            if(c==1)
                break;
        }
        if(y!=-1)
        reverse(nums.begin()+y,nums.end());
        else
            sort(nums.begin(),nums.end());
    }
};
//Time: O(N^2)
//SPace: O(1)