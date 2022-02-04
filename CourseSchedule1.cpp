//first thought: topo sort in directed graph
    
    bool dfs(vector<int> adj[], vector<int> &vis, vector<int> &dvis, int s)
    {
        vis[s] = 1;
        dvis[s] = 1;
        for(auto it: adj[s])
        {
            if(!vis[it])
            {
                if(dfs(adj, vis, dvis, it)) return true;
            }
            else if(dvis[it] == 1) return true;
        }
        dvis[s] = 0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[numCourses];
        for(auto it: prerequisites)
            adj[it[0]].push_back(it[1]);
        vector<int> vis(numCourses, 0);
        vector<int> dvis(numCourses, 0);
        for(int i=0; i<numCourses; i++)
        {
            if(!vis[i])
            {
                if(dfs(adj, vis, dvis, i)) return false;
            }
        }
        
        return true;
    }