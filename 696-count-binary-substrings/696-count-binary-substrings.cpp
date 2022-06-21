class Solution {
public:
    int countBinarySubstrings(string s) {
       int zero=0, one=0;
        int res=0;
        if(s[0]=='0')
            zero++;
        else
            one++;
        int c=0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                if(s[i]=='0')
                    zero++;
                
                else
                    one++;
            }
            else
            {
                if(c!=0)
                res+=min(one, zero);
                c++;
                if(s[i]=='0')
                    zero=1;
                else
                    one=1;
            }
        }
            if(c!=0)
                res+=min(one, zero);
    return res;
    }
};