class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(m.find(target-x)!=m.end() && m[target-x]!=i)
                return {i,m[target-x]};
        }
        return {0,0};
    }
};