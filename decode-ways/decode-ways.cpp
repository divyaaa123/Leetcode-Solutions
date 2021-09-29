class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size(),-1);
       return util(s,0,dp);
    }
    int util(string &s,int i, vector<int> &dp){
           if(i>=s.size())
            return 1;
             
        if(s[i]=='0')
            return 0;
        if(dp[i]!=-1)
            return dp[i];
     
       
        int c=0;
        int x=0,y=0;
            x=util(s,i+1,dp);
        
            if(i<s.size()-1 && (s[i]=='1' || (s[i]=='2')&& s[i+1]<='6'))
                y=util(s,i+2,dp);
        dp[i]=x+y;
        return x+y;
    }
};