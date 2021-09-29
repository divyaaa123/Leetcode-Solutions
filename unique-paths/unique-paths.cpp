class Solution {
public:
    int uniquePaths(int m,int n){
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        return uniquePathsU(m,n,dp);
    }
   int uniquePathsU(int m, int n, vector<vector<int>> &dp) {
        if(dp[m][n]!=-1)
            return dp[m][n];
       if(m<=1 && n<=1){
           dp[m][n]=1;
           return 1;
       }
        if(m<=1){
           int x= uniquePathsU(m,n-1,dp);
            dp[m][n]=x;
            return x;
        }
        if(n<=1){
            dp[m][n]= uniquePathsU(m-1,n,dp);
            return dp[m][n];
        }
            
      dp[m][n]= uniquePathsU(m-1,n,dp)+uniquePathsU(m,n-1,dp);
        return dp[m][n];
    }
};