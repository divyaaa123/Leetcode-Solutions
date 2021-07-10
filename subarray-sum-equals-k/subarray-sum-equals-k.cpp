class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        int n=nums.size();
       int sum=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(m.find(sum-k)!=m.end()){
                c+=m[sum-k];
            }
           m[sum]+=1;
        }
        return c;
    }
};