class Solution {
public:
    int numIslands(vector<vector<char>>& matrix) {
         int m=matrix.size();
    int n=matrix[0].size();
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]=='1' ){
                util(matrix,i,j);
                c++;
            }
        }
    }
    return c;
    }
    
void util(vector<vector<char>>& matrix, int i, int j){
    if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]=='0' )
    return;
    matrix[i][j]='0';
    util(matrix,i+1,j);
    util(matrix,i-1,j);
    util(matrix,i,j-1);
    util(matrix,i,j+1);
}
};