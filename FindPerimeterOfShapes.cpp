int findPerimeter(int mat[MAX][MAX], int n, int m)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            
            if(mat[i][j] == 1)
            {
                int count=0;
                if(i>0 && mat[i-1][j])
                  count++;
                if(j>0 && mat[i][j-1])
                  count++;
                if(i<n-1 && mat[i+1][j])
                  count++;
                if(j<m-1 && mat[i][j+1])
                  count++;
                 ans += (4-count);
            }
            
        }
        
    }
    return ans;
}