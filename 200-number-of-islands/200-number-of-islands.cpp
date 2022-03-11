class Solution {
public:
    int numIslands(vector<vector<char>>& matrix) {
         int m=matrix.size();
    int n=matrix[0].size();
    int c=0;
    vector<vector<int>> visited(m,(vector<int>(n,0)));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]=='1' && !visited[i][j]){
                util(matrix,visited,i,j);
                c++;
            }
        }
    }
    return c;
    }
    
void util(vector<vector<char>>& matrix,  vector<vector<int>>& visited, int i, int j){
    if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]=='0' || visited[i][j]==1)
    return;
    visited[i][j]=1;
    util(matrix,visited,i+1,j);
    util(matrix,visited,i-1,j);
    util(matrix,visited,i,j-1);
    util(matrix,visited,i,j+1);
}
};