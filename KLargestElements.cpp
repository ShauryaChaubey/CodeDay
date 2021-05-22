vector<int> kLargest(int arr[], int n, int k) 
	{
	    priority_queue<int, vector<int>, greater<int>> minhp;
	    for(int i=0; i<n; i++)
	    {
	        if(minhp.size() < k)
	           minhp.push(arr[i]);
	        else
	        {
	            if(minhp.top() < arr[i])
	            {
	                minhp.pop();
	                minhp.push(arr[i]);
	            }
	        }
	    }
	    vector<int> res;
	    for(int i=0; i<k; i++)
	    {
	        res.push_back(minhp.top());
	        minhp.pop();
	    }
	    //res.push_back(minhp.top());
	    reverse(res.begin(), res.end());
	    return res;
	}