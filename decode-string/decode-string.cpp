class Solution {
public:
    string decodeString(string s) {
        int pos=0;
       return helper(s,pos);
    }
    string helper(string s, int& i){
         int num=0;
        
        string word="";
        for(;i<s.size();i++){
            char c=s[i];
            if(c=='['){
                string temp=helper(s,++i);
                for(;num>0;num--)
                word+=temp;
               
            }
            else if(c >= '0' && c <='9'){
                num=num*10+(c-'0');
            }
            else if(c==']')
                return word;
            else
                word+=c;
        }
        return word;
    }
};