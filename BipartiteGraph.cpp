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

	//BFS method

	bool checkBipartite(vector<vector<int>>& graph, int node, vector<int> &vis)
    {
        vis[node] = 1;
        queue<int> q;
        q.push(node);
        while(!q.empty())
        {
            //k++;
            int a = q.front();
            q.pop();
            for(auto it: graph[a])
            {
                if(vis[it] == -1)
                {
                    vis[it] = (abs)(vis[a]-1);
                    q.push(it);
                }
                else if(vis[it] == vis[a]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int> vis(n, -1);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == -1)
            {
                //k = 0;
                if(!checkBipartite(graph, i, vis)) return false;
            }
        }
        
        
        return true;
    }