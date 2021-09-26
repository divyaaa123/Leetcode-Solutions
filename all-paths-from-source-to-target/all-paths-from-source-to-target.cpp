class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> v;
        int n=graph.size();
      vector<int> mid;
        dfs(graph,v,0,mid);
        return v;
        
    }
    void dfs(vector<vector<int>>&graph,vector<vector<int>>&v,int src,vector<int>& mid){
      
        if(src==(graph.size()-1)){
            mid.push_back(src);
            //cout<<mid.size();
            v.push_back(mid);
           // cout<<v.size();
            mid.pop_back();
            return;
        }
        mid.push_back(src);
        for(auto i:graph[src]){
            dfs(graph,v,i,mid);                       
        }
        mid.pop_back();
    }
};
//Time: O(V+E)
//Space: O(V)