vector<int> order;
	void dfs(vector<int> adj[], vector<int> &vis, int temp)
	{
	    vis[temp] = 1;
	    for(auto it: adj[temp])
	    {
	        if(!vis[it])
	          dfs(adj, vis, it);
	    }
	    order.push_back(temp);
	}
	
	void rdfs(vector<int> rev[], vector<int> &v, int src)
	{
	    v[src] = 1;
	    for(auto it: rev[src])
	    {
	        if(!v[it])
	          dfs(rev, v, it);
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        order.clear();
        vector<int> rev[V];
        for(int i=0; i<V; i++)
        {
            for(auto it: adj[i])
            {
                rev[it].push_back(i);
            }
        }
        vector<int> vis(V, 0);
        int count=0;
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                dfs(adj, vis, i);
                //count++;
            }
        }
        vector<int> v(order.size(), 0);
        for(int i=order.size()-1; i>=0; i--)
        {
            if(!v[order[i]])
            {
                rdfs(rev, v, order[i]);
                count++;
            }
        }
        return count;
    }