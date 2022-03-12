class Solution {
public:
    int longestPalindromeSubseq(string s) {
     int n=s.size();
     vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
            dp[i][i]=1;
     for(int d=1;d<n;d++){
         for(int j=0;j<n-d;j++){
             if(s[j]==s[j+d]){
                 dp[j][j+d]=dp[j+1][j+d-1]+2;
             }
             else
             {
                 dp[j][j+d]=max(dp[j+1][j+d],dp[j][j+d-1]);
             }
         }
     }
       
        return dp[0][n-1];
    }
};