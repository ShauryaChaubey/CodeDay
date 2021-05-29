bool hasArrayTwoCandidates(int arr[], int n, int x) 
	{
	    unordered_set<int> st;
	    for(int i=0; i<n; i++)
	    {
	        st.insert(arr[i]);
	    }
	    for(int i=0; i<n; i++)
	    {
	        int temp = x-arr[i];
	        if(st.find(temp) != st.end() && temp != arr[i])
	          return true;
	    }
	    return false;
	}