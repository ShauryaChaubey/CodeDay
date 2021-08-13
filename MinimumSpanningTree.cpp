int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        int cost = 0;
        vector<bool> visit(V, false);
        while(!pq.empty())
        {
            pair<int, int> temp=pq.top();
            //cout << temp.first << " " << temp.second << endl;
            pq.pop();
            if(visit[temp.second]) continue;
            cost += temp.first;
            visit[temp.second] = true;
            for(auto it: adj[temp.second])
            {
                if(!visit[it[0]])
                {
                    cout << it[1] << " " << it[0] << endl;
                    pq.push({it[1], it[0]});
                }
            }
        }