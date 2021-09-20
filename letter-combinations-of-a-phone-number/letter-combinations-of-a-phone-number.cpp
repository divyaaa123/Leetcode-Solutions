class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
     vector<string> v;
        map<char,string> m;
    m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
      string ans="";
        util(digits,0,ans,v, m);
        return v;
    }
    void util(string &digits, int i, string ans, vector<string>& v,  map<char,string> &m){
        if(i==digits.size())
        {
            if(ans!="")
            v.push_back(ans);
            ans="";
            return;
        }
       
            for(int k=0;k<m[digits[i]].size();k++){
                
                util(digits,i+1,ans+m[digits[i]][k],v,m);
            }
    //Time: O(N)
    //Space: o(N)
        
    }
};