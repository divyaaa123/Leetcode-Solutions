class Solution {
public:
    int longestValidParentheses(string s) {
     int l=0,r=0,m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                l++;
            else
                r++;
            if(l==r)
                m=max(m,l+r);
            else if(r>l)
            {
                l=0;
                r=0;
            }
        }
        l=0,r=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(')
                l++;
            else
                r++;
            if(l==r)
                m=max(m,l+r);
            else if(l>r){
                l=0;
                r=0;
            }
                
        }
        return m;
    }
};