class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++){
          //  cout<<ceil(log10(nums[i]))<<" ";
            int x=floor(log10(nums[i])+1);
            if(x%2==0)
                c++;
        }
        return c;
    }
};