class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int c=0;
        int n=arr.size();
        int sum=0;
        vector<int> a(n+1,0);
        a[1]=arr[0];
        a[0]=0;
        for(int i=2;i<=n;i++){
            a[i]=a[i-1]+arr[i-1];   
        }
   for(int i=0;i<n;i++){
       c+=arr[i];
      
       for(int j=i+1;j<n;j++){
           if((j-i)%2==0){
             
               c+=a[j+1]-a[i];
             
           }
           
       }
       
   }
        return c;
        }
};