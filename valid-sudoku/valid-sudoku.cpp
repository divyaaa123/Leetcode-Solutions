class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      set<string> s;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                 string a= "row"+to_string(i)+board[i][j];
                string b="col"+to_string(j)+board[i][j];
                string c="block" + to_string((i/3))+to_string(j/3)+board[i][j];
                    if(s.find(a)!=s.end())
                        return 0;
                    if(s.find(b)!=s.end())
                        return 0;
                    if(s.find(c)!=s.end())
                        return 0;
                    s.insert(a);
                    s.insert(b);
                    s.insert(c);
                }
            }
        }
        return 1;
    }
};
//Time: O(1)
//Space: O(N+N+N)