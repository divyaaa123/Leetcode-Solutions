class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=1;int n=arr.size();
        while(i<n && arr[i-1]<arr[i])
            i++;
        if(i==n || i==1)
            return false;
        while(i<n && arr[i]<arr[i-1]){
            i++;
        }
        if(i==n)
            return true;
        return false;
    }
};