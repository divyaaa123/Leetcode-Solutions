class Solution {
public:
    int findLHS(vector<int>& nums) {
     map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        map<int,int> ::iterator it=m.begin();
    
        int x= it->first;
        int y=m[x];
        int ma=0;
        for(it=m.begin();it!=m.end();++it){
            int p=it->first;
            int q=m[p];
            if((p-x)==1){
             
                ma=max(ma,q+y);
            }
            x=p;
            y=q;
        }
        return ma;
    }
};
//time: O(N)
//space: O(N)