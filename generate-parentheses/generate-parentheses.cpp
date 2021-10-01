class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        help(v,"",n,n);
        return v;
    }
    void help(  vector<string> &v,string s,int open,int close){
        if(open<=0 && close<=0)
        {
            v.push_back(s);
            return;
        }
        if(open>0)
            help(v,s+'(',open-1,close);
        if(close>0 && close>open)
            help(v,s+')',open,close-1);
      
        return;
    }
};
//Time: O(2^2^n)
//Space: O(2^2^n)