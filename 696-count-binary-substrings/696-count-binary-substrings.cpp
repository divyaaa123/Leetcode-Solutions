class Solution {
public:
    int countBinarySubstrings(string s) {
       int prev=0, curr=1, res=0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]!=s[i]){
              res+=min(prev,curr);
                prev=curr;
                curr=1;
            }
            else
            {
               curr++;
            }
        }
            
                res+=min(prev, curr);
    return res;
    }
};