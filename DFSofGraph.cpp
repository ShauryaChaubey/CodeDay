vector<int> res;
    void solve(int src, vector<int> &visit, vector<int> adj[])
    {
        visit[src] = 1;
        res.push_back(src);
        for(auto it:adj[src])
        {
            if(!visit[it])
            {
                solve(it, visit, adj);
            }
        }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    //res.clear();
	    vector<int> visit(V, 0);
	    solve(0, visit, adj);
	    return res;
	}