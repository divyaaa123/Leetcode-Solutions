class MedianFinder {
public:
    priority_queue<int> leftheap;
    priority_queue<int, vector<int>, greater<int>> rightheap;
    double med;
    int c=0;
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if(c==0){
            c=1;
            med=num;
            leftheap.push(num);
           
        }
        else if(leftheap.size()>rightheap.size()){
            if(num<med){
                
                rightheap.push(leftheap.top());
                leftheap.pop();
                leftheap.push(num);
            }
            else{
                rightheap.push(num);
                 
            }
         
            med=(leftheap.top()*1.0+rightheap.top())/2;
        }
        else if(leftheap.size()<rightheap.size()){
              if(num>med){
                leftheap.push(rightheap.top());
                rightheap.pop();
                rightheap.push(num);
            }
            else
                leftheap.push(num);
             // cout<<leftheap.top()+rightheap.top();
            med=(leftheap.top()*1.0+rightheap.top())/2;
        }
        else
        {
            if(num>med){
                rightheap.push(num);
                med=rightheap.top();
            }
            else
            {
                leftheap.push(num);
                med=leftheap.top();
            }
        }
    }
    
    double findMedian() {
        return med;
    }
};
//Time Complexity: O(NLog(N))
/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */