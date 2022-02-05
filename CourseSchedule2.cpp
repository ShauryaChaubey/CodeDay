//first thought: topological sort
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[numCourses];
        for(auto it: prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        vector<int> inEdges(numCourses, 0);
        for(int i=0; i<numCourses; i++)
        {
            for(auto it: adj[i])
                inEdges[it]++;
        }
        
        queue<int> q;
        for(int i=0; i<numCourses; i++)
        {
            if(inEdges[i] == 0) q.push(i);
        }
        vector<int> res;
        while(!q.empty())
        {
            int node = q.front();
            res.push_back(node);
            q.pop();
            for(auto it: adj[node])
            {
                inEdges[it]--;
                if(inEdges[it] == 0) q.push(it);
            }
        }
        if(res.size() != numCourses) return {};
        reverse(res.begin(), res.end());
        return res;
    }

    //dfs approach

    //first thought: topological sort
    int f=0;
    void dfs(vector<int> adj[], vector<int> &vis, vector<int> &dvis, vector<int> &res, int s)
    {
        vis[s] = 1;
        dvis[s] = 1;
        for(auto it: adj[s])
        {
            if(!vis[it])
              dfs(adj, vis, dvis, res, it);
            else if(dvis[it] == 1)
            {
                f = 1;
                return;
            }
        }
        dvis[s] = 0;
        res.push_back(s);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[numCourses];
        for(auto it: prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        vector<int> vis(numCourses, 0);
        vector<int> dvis(numCourses, 0);
        vector<int> res;
        f=0;
        for(int i=0; i<numCourses; i++)
        {
            if(!vis[i])
            {
                dfs(adj, vis, dvis, res, i);
            }
        }
        if(f == 1) return {};
        //reverse(res.begin(), res.end());
        return res;
    }