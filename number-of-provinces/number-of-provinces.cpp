class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> graph[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]!=0 && i!=j){
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }
        int c=0;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                c++;
                util(graph,visited,i);
            }
        }
        return c;
    }
    void util(vector<int> graph[],vector<int>&visited, int src){
        if(visited[src])
            return;
        visited[src]=1;
        for(auto i:graph[src]){
            if(!visited[i])
            {
                util(graph,visited,i);
            }
        }
    }
};
//Time:O(N+E)
//Space: O(N*E)