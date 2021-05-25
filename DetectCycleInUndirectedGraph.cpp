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