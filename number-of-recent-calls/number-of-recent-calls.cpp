class RecentCounter {
    int count;
   vector<int> v;
public:
    
    RecentCounter() {
        count=0;
    }
    
    int ping(int t) {
        int c=0;
        v.push_back(t);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<t-3000)
                return c;
            c++;
        }
        return c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */