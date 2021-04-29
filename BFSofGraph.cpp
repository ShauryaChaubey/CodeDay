	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int> visit(V, 0);
	    vector<int> res;
	    queue<int> q;
	    q.push(0);
	    visit[0] = 1;
	    while(!q.empty())
	    {
	        int k = q.front();
	        q.pop();
	        res.push_back(k);
	        for(auto it:adj[k])
	        {
	            if(!visit[it])
	            {
	                visit[it] = 1;
	                q.push(it);
	            }
	        }
	    }
	    return res;
	}