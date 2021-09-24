class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> graph[numCourses];
        vector<int> indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
            indegree[prerequisites[i][1]]++;
        }
     queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto i:graph[x]){
                indegree[i]--;
                if(indegree[i]==0)
                    q.push(i);
            }
            numCourses--;
        }
        return numCourses==0;
    }
   
};
//Time: O(N+E)
//Space: O(N*E)