class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    set<int> s;
        int n=nums.size();
        int x=min(k,n);
        for(int i=0;i<x;i++){
            if(s.find(nums[i])!=s.end())
                return true;
            s.insert(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(s.find(nums[i])!=s.end())
                return true;
            else
            {
                s.insert(nums[i]);
                s.erase(s.find(nums[i-k]));
            }
        }
        return false;
    }
};
//Time: O(N)
//Space: O(K)