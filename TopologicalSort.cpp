vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> indeg(V, 0);
	    vector<int> res;
	    for(int i=0; i<V; i++)
	    {
	        for(auto it:adj[i])
	          indeg[it]++;
	    }
	    queue<int> q;
	    for(int i=0; i<V; i++)
	    {
	        if(indeg[i] == 0)
	          q.push(i);
	    }
	    while(!q.empty())
	    {
	        int temp = q.front();
	        q.pop();
	        res.push_back(temp);
	        for(auto it:adj[temp])
	        {
	            indeg[it]--;
	            if(indeg[it] == 0)
	              q.push(it);
	        }
	    }
	    return res;
	}

	//dfs method

	void dfs(vector<int> adj[], vector<int> &vis, int s, vector<int> &res)
	{
	    vis[s] = 1;
	    for(auto it: adj[s])
	    {
	        if(!vis[it]) dfs(adj, vis, it, res);
	        
	    }
	    res.push_back(s);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V, 0);
	    //stack<int> res;
	    vector<int> res;
	    for(int i=0; i<V; i++)
	    {
	        if(!vis[i])
	        {
	            dfs(adj, vis, i, res);
	        }
	    }
	    
	   // while(!res.empty())
	   // {
	   //     Res.push_back(res.top());
	   //     res.pop();
	   // }
	    reverse(res.begin(), res.end());
	    return res;
	}