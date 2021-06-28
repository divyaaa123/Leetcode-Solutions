class Solution {
public:
    string removeDuplicates(string s) {
        string c="";
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
           if(!st.empty() && st.top()==s[i])
                    st.pop();
               else
                    st.push(s[i]);
            
        }
        while(!st.empty())
        {
            c+=st.top();
            st.pop();
        }
        reverse(c.begin(),c.end());
        return c;
    }
};