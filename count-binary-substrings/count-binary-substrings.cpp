class Solution {
public:
    int countBinarySubstrings(string s) {
        int c=0;
        int n=s.size();
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && i>0 && s[i-1]!=s[i]){
                if(o>0){
                    c+=1;
                    o--;
                }
                z=1;
            }
            else if(s[i]=='0'){
                if(o>0){
                    c+=1;
                    o--;
                }
                z++;
            }
             else if(s[i]=='1' && i>0 && s[i-1]!=s[i]){
                 if(z>0){
                    c+=1;
                    z--;
                }
                o=1;
            }
            else if(s[i]=='1'){
                if(z>0){
                    c+=1;
                    z--;
                }
                o++;
            }
                
        }
        return c;
    }
};
//Time: O(N)
//Space: O(1)