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