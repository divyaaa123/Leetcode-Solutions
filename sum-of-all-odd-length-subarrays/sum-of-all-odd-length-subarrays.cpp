class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int c=0;
        int n=arr.size();
        int sum=0;
   for(int i=0;i<n;i++){
       c=0;
       for(int j=i;j<n;j++){
           if((j-i)%2==0){
               for(int k=i;k<=j;k++)
               c+=arr[k ];
           }
       }
       sum+=c;
   }
        return sum;
        }
};