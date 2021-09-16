class CustomStack {
public:
    int top=-1;
    int MAX_SIZE;
    vector<int> v;
    CustomStack(int maxSize) {
        MAX_SIZE=maxSize;
    }
    
    void push(int x) {
        top++;
        if(top!=MAX_SIZE)
            v.push_back(x);
        else
            top--;
    }
    
    int pop() {
        if(top==-1)
            return -1;
        int x=v[v.size()-1];
        v.pop_back();
        top--;
        return x;
    }
    
    void increment(int k, int val) {
        int x=min(top,k-1);
      //  cout<<x<<" ";
        for(int i=0;i<=x;i++)
            v[i]+=val;
    }
};
//Time: O(N)
//Space: O(maxSize)
/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */