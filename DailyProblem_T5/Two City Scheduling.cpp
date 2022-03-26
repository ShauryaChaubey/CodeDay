int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        map<int, int> mp;
        for(int i=0; i<costs.size(); i++)
        {
            mp.insert({costs[i][0]-costs[i][1], i});
        }
        int k=0, ans=0;
        for(auto it: mp)
        {
            if(k>=0 && k<(costs.size()/2))
            {
                ans += costs[it.second][0];
                k++;
            }
            else
            {
                ans += costs[it.second][1];
            }
        }
        return ans;
    }