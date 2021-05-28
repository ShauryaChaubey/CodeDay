	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int currX = KnightPos[0];
	    int currY = KnightPos[1];
	    int tarX = TargetPos[0];
	    int tarY = TargetPos[1];
	    if(currX == tarX && currY == tarY)
	       return 0;
	    int arr[N][N];
	    for(int i=0; i<N; i++)
	    {
	        for(int j=0; j<N; j++)
	        {
	            arr[i][j] = 0;
	        }
	    }
	    queue<pair<int, int>> q;
	    q.push(make_pair(currX-1, currY-1));
	    while(!q.empty())
	    {
	        auto curr = q.front();
	        int i = curr.first;
	        int j = curr.second;
	        q.pop();
	        
	        if((i-1)>=0 && (i-1)<N && (j-2)>=0 && (j-2)<N && arr[i-1][j-2] == 0)
	        {
	            arr[i-1][j-2] = 1+arr[i][j];
	            q.push(make_pair(i-1, j-2));
	        }
	        if((i-1)>=0 && (i-1)<N && (j+2)>=0 && (j+2)<N && arr[i-1][j+2] == 0)
	        {
	            arr[i-1][j+2] = 1+arr[i][j];
	            q.push(make_pair(i-1, j+2));
	        }
	        if((i+1)>=0 && (i+1)<N && (j-2)>=0 && (j-2)<N && arr[i+1][j-2] == 0)
	        {
	            arr[i+1][j-2] = 1+arr[i][j];
	            q.push(make_pair(i+1, j-2));
	        }
	        if((i+1)>=0 && (i+1)<N && (j+2)>=0 && (j+2)<N && arr[i+1][j+2] == 0)
	        {
	            arr[i+1][j+2] = 1+arr[i][j];
	            q.push(make_pair(i+1, j+2));
	        }
	        if((i-2)>=0 && (i-2)<N && (j-1)>=0 && (j-1)<N && arr[i-2][j-1] == 0)
	        {
	            arr[i-2][j-1] = 1+arr[i][j];
	            q.push(make_pair(i-2, j-1));
	        }
	        if((i-2)>=0 && (i-2)<N && (j+1)>=0 && (j+1)<N && arr[i-2][j+1] == 0)
	        {
	            arr[i-2][j+1] = 1+arr[i][j];
	            q.push(make_pair(i-2, j+1));
	        }
	        if((i+2)>=0 && (i+2)<N && (j-1)>=0 && (j-1)<N && arr[i+2][j-1] == 0)
	        {
	            arr[i+2][j-1] = 1+arr[i][j];
	            q.push(make_pair(i+2, j-1));
	        }
	        if((i+2)>=0 && (i+2)<N && (j+1)>=0 && (j+1)<N && arr[i+2][j+1] == 0)
	        {
	            arr[i+2][j+1] = 1+arr[i][j];
	            q.push(make_pair(i+2, j+1));
	        }
	    }
	    return arr[tarX-1][tarY-1];
	}