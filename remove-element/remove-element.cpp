class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int k=0;
        int c=0;
        int i=0,j=0;
        int n=nums.size();
        while(i<n){
          if(nums[i]==val){
              nums[i]=nums[n-1];
              n--;
          }
            else
                i++;
        }

        return n;
    }
};