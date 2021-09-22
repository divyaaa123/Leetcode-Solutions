class Solution {
public:
    static bool cmp(pair<int, int>& a,
         pair<int, int>& b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int, int> > A;
    for (auto& it : m) {
        A.push_back(it);
    }
        sort(A.begin(), A.end(), cmp);
        vector<int> v;
        for(auto i:A){
            if(k==0)
                break;
            k--;
            v.push_back(i.first);
        }
        return v;
    }
};