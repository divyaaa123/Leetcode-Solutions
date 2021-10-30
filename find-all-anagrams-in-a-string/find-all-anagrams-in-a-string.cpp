class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size())
            return {};
        vector<int> v;
        int n=p.size();
        vector<int> freq_p(26,0);
        vector<int> freq_s(26,0);
        for(int i=0;i<p.size();i++){
            freq_p[p[i]-'a']++;
        }
        for(int i=0;i<p.size()-1;i++){
            freq_s[s[i]-'a']++;
        }
        for(int i=p.size()-1;i<s.size();i++){
            freq_s[s[i]-'a']++;
            if(freq_p==freq_s)
                v.push_back(i-n+1);
            freq_s[s[i-n+1]-'a']--;
        }
        return v;
    }
};
//Time: O(S+P)
//Space: O(1)