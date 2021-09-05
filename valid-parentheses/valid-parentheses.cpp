class Solution {
public:
    bool isValid(string s) {
        map<char,char> m;
        m[')']='(';
        m['}']='{';
        m[']']='[';
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                char x=st.top();
               
                if( x!=m[s[i]])
                    return false;
                 st.pop();
            }
        }
        //Time Complexity:  O(N)
        //Space Complexity: O(N)
        return st.empty();
    }
};