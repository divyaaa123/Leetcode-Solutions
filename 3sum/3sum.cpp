class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return {};
      vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
        int l=i+1, r=n-1;
        int target=-nums[i];
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum<target)
                l++;
            else if(sum>target)
                r--;
            else{
                vector<int> temp={nums[i],nums[l],nums[r]};
                v.push_back(temp);
                while (l < r && nums[l] == temp[1]) l++;
                 while (l < r && nums[r] == temp[2]) r--;
            }
             while (i + 1 < n && nums[i + 1] == nums[i]) 
            i++;
        }
        }
        return v;
    }
};
//Time: O(N*N)
//Space: O(1)