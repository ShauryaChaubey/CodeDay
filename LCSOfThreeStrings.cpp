int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    int ABC[n1+1][n2+1][n3+1];
    for(int i=0; i<=n1; i++)
    {
        for(int j=0; j<=n2; j++)
        {
            for(int k=0; k<=n3; k++)
            {
                if(i==0 || j==0 || k==0)
                   ABC[i][j][k] = 0;
                else if(A[i-1] == B[j-1] && B[j-1] == C[k-1])
                   ABC[i][j][k] = ABC[i-1][j-1][k-1]+1;
                else
                   ABC[i][j][k] = max(ABC[i][j][k-1], 
                   max(ABC[i-1][j][k], ABC[i][j-1][k]));
            }
        }
    }
    return ABC[n1][n2][n3];
}