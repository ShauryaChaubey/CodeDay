bool solve(int src, vector<int> &visit, vector<int> &order, vector<int> adj[])
	{
	    visit[src] = 1;
	    order[src] = 1;
	    for(auto it: adj[src])
	    {
	        if(!visit[it])
	        {
	            bool flg = solve(it, visit, order, adj);
	            if(flg == true)
	              return true;
	        }
	        else if(order[it] == 1)
	          return true;
	    }
	    order[src] = 0;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<int> visit(V, 0);
	   	vector<int> order(V, 0);
	   	for(int i=0; i<V; i++)
	   	{
	   	    if(!visit[i])
	   	    {
	   	        bool c = solve(i, visit, order, adj);
	   	        if(c == true)
	   	          return true;
	   	    }
	   	}
	   	return false;
	}


	//striver dfs
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
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> vis(V, 0);
        vector<int> dvis(V, 0);
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                if(dfs(adj, vis, dvis, i)) return true;
            }
        }
        
        return false;
    }