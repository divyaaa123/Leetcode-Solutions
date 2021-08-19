class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            if(v.size()==n)
                break;
            if(arr[i]==0){
                v.push_back(0);
                 if(v.size()==n)
                break;
                v.push_back(0);
            }
            else
            {
                v.push_back(arr[i]);
            }
        }
        arr=v;
        return;
    }
};