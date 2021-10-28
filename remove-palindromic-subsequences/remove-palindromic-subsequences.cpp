class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.size();
        int c=1;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]){
                c=1;
            }
            else
            {
                c=0;
                break;
            }
        }
        if(c==1)
            return 1;
        return 2;
    }
};
//Time: O(N/2)
//Space: O(1)