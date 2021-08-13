int dfs(int src, vector<int>adj[], vector<int> &vis)
    {
        if(vis[src] == -1) vis[src] = 1;
        for(auto it:adj[src])
        {
            if(vis[it] == -1)
            {
                vis[it] = 1-vis[src];
                if(dfs(it, adj, vis) == false) return false;
            }
            else if(vis[it] == vis[src])
              return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[])
	{
	    vector<int> vis(V, -1);
	    //vis[0] = 1;
	    //int count = 0;
	    for(int i=0; i<V; i++)
	    {
	        if(vis[i] == -1)
	        {
	            if(!dfs(i, adj, vis))
	              return false;
	        }
	    }
	    return true;
	    
	}