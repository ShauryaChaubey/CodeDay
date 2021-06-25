int f=0;
    void dfs(int src,int par, int col, vector<int> &vis, vector<vector<int>>& graph)
    {
        vis[src] = col;
        for(auto it:graph[src])
        {
            if(vis[it] == -1)
                dfs(it, src, 3-col, vis, graph);
            else if(it != par && col == vis[it])
            {
                f = 1;
                break;
            }
        }
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        f=0;
        int n=graph.size();
        vector<int>vis(n, -1);
        for(int i=0; i<n; i++)
        {
            if(vis[i] == -1)
                dfs(i,0,1,vis,graph);
        }
          
        if(f == 1) return false;
        return true;
    }