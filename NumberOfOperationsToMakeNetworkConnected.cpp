void dfs(int src, vector<int> g[], vector<int> &vis)
    {
        vis[src] = 1;
        for(auto it:g[src])
        {
            if(!vis[it])
                dfs(it, g, vis);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) 
    {
        vector<int> g[n];
        if(connections.size() < n-1)
            return -1;
        for(int i=0; i<connections.size(); i++)
        {
            g[connections[i][0]].push_back(connections[i][1]);
            g[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int> vis(n, 0);
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i, g, vis);
            }
        }
        return c-1;
    }