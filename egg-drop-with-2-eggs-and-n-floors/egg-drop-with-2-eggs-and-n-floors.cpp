class Solution {
public:
    int twoEggDrop(int n) {
        if(n==1)
            return 1;
        int dp[2][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n+1;i++){
            dp[0][i]=i;
        }
        dp[1][1]=1;
       
        for(int i=2;i<=n;i++){
            int m=0;
            dp[1][i]=INT_MAX;
            for(int k=0,l=i-1;l>=0;k++,l--){
                m=max(dp[0][k],dp[1][l]);
                
                dp[1][i]=min(dp[1][i],m+1);
               
            }
          
        }
       
        return dp[1][n];  }
};