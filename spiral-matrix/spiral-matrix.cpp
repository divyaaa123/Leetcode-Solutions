class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int row=matrix.size();
        int col=matrix[0].size();
        int up=0,left=0,right=col-1,down=row-1;
        while(result.size()<row*col){
            for(int cols=left;cols<=right;cols++)
                result.push_back(matrix[up][cols]);
           for(int rows=up+1;rows<=down;rows++){
               result.push_back(matrix[rows][right]);
           } 
            if(up!=down){
                for(int cols=right-1;cols>=left;cols--){
                    result.push_back(matrix[down][cols]);
                }
            }
            if(left!=right){
                for(int rows=down-1;rows>up;rows--){
                    result.push_back(matrix[rows][left]);
                }
            }
            left++;
            right--;
            up++;
            down--;
        }
        return result;
    }
};