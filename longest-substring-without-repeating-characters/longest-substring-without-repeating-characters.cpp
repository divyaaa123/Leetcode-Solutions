class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     vector<int> v(256,-1);
        int start=-1, m=0;
        for(int i=0;i<s.size();i++){
            if(v[s[i]]>start)
                start=v[s[i]];
            v[s[i]]=i;
            m=max(m,i-start);
        }
        return m;
    }
};