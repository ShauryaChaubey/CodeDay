int maxGold(int n, int m, vector<vector<int>> M)
    {
        for(int col=m-2; col>=0; col--)
        {
            for(int row=0; row<n; row++)
            {
                int rt = M[row][col+1];
                int rt_up = (row == 0)?0:M[row-1][col+1];
                int rt_dn = (row == n-1)?0:M[row+1][col+1];
                
                M[row][col] += max(rt, max(rt_up, rt_dn));
            }
        }
        int sum = M[0][0];
        for(int i=1; i<n; i++)
        {
            sum = max(sum, M[i][0]);
        }
        return sum;
    }