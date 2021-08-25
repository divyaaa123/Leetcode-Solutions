class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>> s(nums.begin(),nums.end());
        int i=0;
        for(auto j:s){
            i++;
            if(i==3)
                return j;
            
        }
        return *s.begin();
    }
};