class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int n=nums.size();
        int q = queries.size();
       vector<vector<int>> v(n+1,vector<int>(101,0));
        for(int i=1;i<=n;i++){
         for(int j=1;j<101;j++)
             v[i][j]=v[i-1][j];
            v[i][nums[i-1]]++;
        }
        for(int i=0;i<q;i++){
            int l=queries[i][0];
            int r=queries[i][1];
               int m=INT_MAX;
            int a=0;
            for(int j=1;j<101;j++){
                if((v[r+1][j]-v[l][j])!=0)
                { 
                    if(a!=0)
                    {
                        m=min(m,j-a);
                       
                    }
                     a=j;
                }
                
            }
            if(m==INT_MAX)
                ans.push_back(-1);
            else
                ans.push_back(m);
        }
        return ans;
    }
};