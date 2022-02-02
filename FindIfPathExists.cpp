bool dfs(int s, vector<int> adj[], int d, vector<int> &vis)
    {
        vis[s] = 1;
        for(auto it: adj[s])
        {
            if(it == d) return true;
            if(!vis[it]) 
            {
                if(dfs(it, adj, d, vis)) return true;
            }
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        if(source == destination) return true;
        vector<int> vis(n, 0);
        
        vector<int> adj[n];
        for(auto i: edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        if(dfs(source, adj, destination, vis)) return true;
        
        //if(vis[destination]==1) return true;
        return false;
    }