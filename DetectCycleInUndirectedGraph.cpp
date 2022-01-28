 bool solve(int src, vector<int> &visit, int parent, vector<int>adj[])
    {
        visit[src] = 1;
        //order[src] = 1;
        for(auto it: adj[src])
        {
            if(!visit[it])
            {
                bool flg = solve(it, visit, src, adj);
	            if(flg == true)
	               return true;
            }
            else if(it != parent)
              return true;
        }
        //order[src] = 0;
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    //vector<int> order(V, 0);
	    vector<int> visit(V, 0);
	    //visit[0] = 1;
	    for(int i=0; i<V; i++)
	    {
	        if(!visit[i])
	        {
	            bool flg = solve(i, visit, -1, adj);
	            if(flg == true)
	               return true;
	        }
	    }
	    return false;
	    
	}


	//BFS method

	bool bfscycle(int V, vector<int> adj[], vector<int> &vis,int s)
    {
        queue<pair<int, int>> q;
        q.push({s, -1});
        vis[s] = 1;
        while(!q.empty())
        {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(auto it: adj[a])
            {
                if(!vis[it])
                {
                    vis[it] = 1;
                    q.push({it, a});
                }
                else if(it != b) return true;
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int> vis(V, 0);
        
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                if(bfscycle(V, adj, vis, i)) return true;
                
            }
        }
        
        return false;
    }


	//DFS method

	bool dfscycle(int par, vector<int> adj[], vector<int> &vis,int s)
    {
        vis[s] = 1;
        for(auto it: adj[s])
        {
            if(!vis[it])
            {
                if(dfscycle(s, adj, vis, it)) return true;
            }
            else if(it != par) return true;
        }
        
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int> vis(V, 0);
        
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                if(dfscycle(-1, adj, vis, i)) return true;
                
            }
        }
        
        return false;
    }