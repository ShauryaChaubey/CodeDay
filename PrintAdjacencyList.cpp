vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	    vector<vector<int>> res;
	    for(int i=0; i<V; i++)
	    {
	        vector<int> temp;
	        temp.push_back(i);
	        for(auto it:adj[i])
	        {
	            temp.push_back(it);
	        }
	        res.push_back(temp);
	        temp.clear();
	   }
	   return res;
	}