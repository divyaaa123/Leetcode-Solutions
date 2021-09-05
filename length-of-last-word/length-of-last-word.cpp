class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int a=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' && c==0){
                continue;
            }
             else if(s[i]==' ' && c==1){
                 break;
             }
            else if(s[i]!=' '){
                a++;
                c=1;
            }
           
                
        }
        return a;
    }
};
//Time Complexity: O(N) 
//Space Complexity: O(1)