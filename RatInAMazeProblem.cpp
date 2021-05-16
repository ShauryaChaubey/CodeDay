vector<string> res;
    int MAX=5;
    void dfs(int i, int j, string s, vector<vector<int>> &m, int n, vector<vector<int>> &visit)
    {
        if(i<0 || j<0 || i>=n || j>=n) return;
        if(m[i][j] == 0 || visit[i][j] == 1) return;
        if(i == n-1 && j == n-1)
        {
            res.push_back(s);
            return;
        }
        visit[i][j] = 1;
        dfs(i-1,j,s+'U',m,n,visit);
        dfs(i+1,j,s+'D',m,n,visit);
        dfs(i,j-1,s+'L',m,n,visit);
        dfs(i,j+1,s+'R',m,n,visit);
        
        visit[i][j] = 0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        res.clear();
        if(m[0][0] == 0)
          return res;
        if(m[n-1][n-1] == 0)
          return res;
        vector<vector<int>> visit(MAX, vector<int>(MAX));
        string s="";
        dfs(0,0,s,m,n,visit);
        sort(res.begin(), res.end());
        return res;
    }