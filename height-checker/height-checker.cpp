class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int ma=0,mi=101;
        for(int i=0;i<heights.size();i++){
            if(ma<heights[i])
                ma=heights[i];
            if(mi>heights[i])
                mi=heights[i];
        }
        int range=ma-mi+1;
        vector<int> freq(range,0);
        for(int i=0;i<n;i++){
            freq[heights[i]-mi]++;
        }
        for(int i=1;i<range;i++)
            freq[i]+=freq[i-1];
        vector<int> op(n,0);
        for(int i=0;i<n;i++){
            op[freq[heights[i]-mi]-1]=heights[i];
            freq[heights[i]-mi]--;
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=op[i])
                c++;
        }
        return c;
    }
};