int minThrow(int n, int arr[])
    {
        vector<int> v(31, -1);
        for(int i=0; i<2*n; i+=2)
        {
            v[arr[i]] = arr[i+1];
        }
        queue<int> q;
        vector<bool> vis(31, false);
        vis[1] = true;
        q.push(1);
        int count=0;
        
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int temp = q.front();
                q.pop();
                
                if(temp == 30) return count;
                for(int j=temp+1; j<temp+7; j++)
                {
                    if(j>30) break;
                    if(vis[j]) continue;
                    else vis[j] = true;
                    
                    if(v[j] != -1) q.push(v[j]);
                    else q.push(j);
                }
            }
            count++;
        }
        return -1;
    }