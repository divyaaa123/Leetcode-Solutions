
class Solution {
public:
     const long long int mod = 1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());
        int m1=max(horizontalCuts[0], h-horizontalCuts[horizontalCuts.size()-1]), m2=max(verticalCuts[0], w-verticalCuts[verticalCuts.size()-1]);
        for(int i=1;i<horizontalCuts.size();i++){
            m1=max(m1,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<verticalCuts.size();i++){
            m2=max(m2,verticalCuts[i]-verticalCuts[i-1]);
        }
        return (m1%mod*m2%mod)%mod;
    }
};