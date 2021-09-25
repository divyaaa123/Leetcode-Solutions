class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<vector<int>> graph(100001);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
            if(graph[edges[i][0]].size()==edges.size())
                return edges[i][0];
             if(graph[edges[i][1]].size()==edges.size())
                return edges[i][1];
        }
        return 0;
    }
};
//Time: O(E)
//Space: O(N*E)