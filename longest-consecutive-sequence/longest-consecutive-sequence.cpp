class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        int m=0;
        for(int num: s){
            if(s.find(num-1)==s.end()){
                int curr=num;
                int c=1;
                while(s.find(curr+1)!=s.end()){
                    curr+=1;
                    c+=1;
                }
                m=max(c,m);
            }
        }
        return m;
    }
};