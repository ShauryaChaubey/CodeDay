void dfs(vector<vector<char>> &grid, int i, int j, int n, 
    int m, vector<vector<int>> &vis)
    {
        if(i < 0 or i >= n or j < 0 or j >= m) return;
        if(grid[i][j] == '0') return;
        if(!vis[i][j] and grid[i][j] == '1')
        {
           vis[i][j] = 1;
           dfs(grid, i+1, j, n, m, vis);
           dfs(grid, i-1, j, n, m, vis);
           dfs(grid, i, j+1, n, m, vis);
           dfs(grid, i, j-1, n, m, vis);
           dfs(grid, i+1, j+1, n, m, vis);
           dfs(grid, i+1, j-1, n, m, vis);
           dfs(grid, i-1, j+1, n, m, vis);
           dfs(grid, i-1, j-1, n, m, vis);
        }
    }
    //Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) 
    {
        //int vis[501][501];
        int n = grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>> vis(n,vector<int>(m, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                vis[i][j] = 0;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] and grid[i][j] == '1')
                {
                    dfs(grid, i, j, n, m, vis);
                    count++;
                }
            }
        }
        return count;
    }