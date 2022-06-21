class Solution {
public:
    int countBinarySubstrings(string s) {
       int zero=0, one=0;
        bool flag=0;
        int res=0;
        map<char,int> m;
        m['0']=0;
        m['1']=1;
        flag=m[s[0]];
        if(flag==0)
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
                  // flag=!flag;
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