class Car{
    public:
    int id,x,y;
    Car(int id, int x,int y){
        this->id=id;
        this->x=x;
        this->y=y;
    }
    int dist() const{
        return x*x + y*y;
    }
};
class CarComp{
    public:
    bool operator()(const Car &A, const Car &B){
        return A.dist()<B.dist();
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<Car> v;
        for(int i=0;i<points.size();i++){
            Car car(i,points[i][0],points[i][1]);
            v.push_back(car);
        }
        priority_queue<Car, vector<Car>, CarComp> maxheap(v.begin(),v.begin()+k);
        for(int i=k;i<v.size();i++){
            Car car =v[i];
            if(car.dist()<maxheap.top().dist()){
                maxheap.pop();
               maxheap.push(car);
            }
        }
        vector<vector<int>> ans;
        while(!maxheap.empty()){
            ans.push_back({maxheap.top().x,maxheap.top().y});
            maxheap.pop();
        }
        sort(ans.begin(),ans.end(),cmp);
        return ans;
    }
    static bool cmp(const vector<int> & a, const vector<int> & b){
        return a[0]<b[0];
    }
};

