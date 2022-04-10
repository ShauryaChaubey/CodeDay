priority_queue<int, vector<int>, greater<int>> pq;
    int size=0;
    KthLargest(int k, vector<int>& nums) 
    {
        size = k;
        for(int it: nums) add(it);
    }
    
    int add(int val) 
    {
        if(pq.size() < size) pq.push(val);
        else
        {
            if(pq.top() < val)
            {
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }