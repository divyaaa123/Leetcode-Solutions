class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> candy(n,1);
        int c=0;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                candy[i]=candy[i-1]+1;
                
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
            {
                candy[i]=max(candy[i+1]+1,candy[i]);
                
            }
        }
        for(int i=0;i<n;i++)
            c+=candy[i];
        return c;
    }
};