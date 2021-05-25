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