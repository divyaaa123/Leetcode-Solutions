class Solution {
public:
    char nextGreatestLetter(vector<char>& A, char target) {
        int low=0, high=A.size()-1;
        char res=A[0];
        while(low<=high){
            int m=low+(high-low)/2;
            if(A[m]==target){
              low=m+1;
            }
            else if(A[m]>target){
                res=A[m];
                high=m-1;
            }
            else
                low=m+1;
        }
        return res;
    }
};