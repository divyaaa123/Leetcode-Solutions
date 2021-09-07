class Solution {
public:
    char findTheDifference(string s, string t) {
        multiset<char> st(s.begin(),s.end());
        for(int i=0;i<t.size();i++){
            if(st.find(t[i])==st.end())
                return t[i];
            st.erase(st.find(t[i]));
        }
        return '0';
        //Space Complexity: O(N)
        //Time Complexity: O(N)
    }
};