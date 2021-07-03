class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
        if(n==0)
            return true;
        for(int i=0;i<n;i++){
            if(goal[i]==s[0]){
                {
                    string m=(goal.substr(i,n)+goal.substr(0,i));
                    //cout<<m;
                    if(m==s)
                        return true;
                }
            }
        }
        return false;
    }
};