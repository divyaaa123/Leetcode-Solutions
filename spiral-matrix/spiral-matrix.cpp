class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int row=matrix.size();
        int col=matrix[0].size();
        int l=0,r=col-1;
        int up=0, down=row-1;
      while(result.size()<(row*col)){
            for(int i=l;i<=r;i++){
             
                result.push_back(matrix[up][i]);
            }
          for(int i=up+1;i<=down;i++){
               
              result.push_back(matrix[i][r]);
          }
          if(up!=down){
          for(int i=r-1;i>=l;i--){
             
              result.push_back(matrix[down][i]);
          }
          }
          if(l!=r){
          for(int i=down-1;i>up;i--){
               
              result.push_back(matrix[i][l]);
          }
          }
           up++;
          down--;
          l++;
          r--;
         
        }
        return result;
    }
};