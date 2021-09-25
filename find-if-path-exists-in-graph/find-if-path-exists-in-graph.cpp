class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<int> graph[n];
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> visited(n,0);
        util(graph,visited,start);
        return visited[end];
    
    }
    void util(vector<int> graph[], vector<bool> &visited, int start){
        visited[start]=1;
        for(int x:graph[start]){
            if(!visited[x])
            util(graph,visited,x);
        }
    }
};
//time: O(N+E)
//Space: O(N)