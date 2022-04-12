void gameOfLife(vector<vector<int>>& board)
    {
        int n=board.size(), m = board[0].size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++)
        {
            vector<int> temp;
            for(int j=0; j<m; j++)
            {
                int c=0;
                if(j==0 && i==0)
                {
                    if(m>1 && board[i][j+1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j+1] == 1) c++;
                    if(n>1 && board[i+1][j] == 1) c++;
                }
                else if(i == n-1 && j == 0)
                {
                    if(m>1 && board[i][j+1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j+1] == 1) c++;
                    if(n>1 && board[i-1][j] == 1) c++;
                }
                else if(i == 0 && j == m-1)
                {
                    if(m>1 && board[i][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j-1] == 1) c++;
                    if(n>1 && board[i+1][j] == 1) c++;
                }
                else if(i == n-1 && j == m-1)
                {
                    if(m>1 && board[i][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j-1] == 1) c++;
                    if(n>1 && board[i-1][j] == 1) c++;
                }
                else if(i == 0)
                {
                    if(m>1 && board[i][j-1] == 1) c++;
                    if(m>1 && board[i][j+1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j+1] == 1) c++;
                    if(n>1 && board[i+1][j] == 1) c++;
                }
                else if(i == n-1)
                {
                    if(m>1 && board[i][j-1] == 1) c++;
                    if(m>1 && board[i][j+1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j+1] == 1) c++;
                    if(n>1 && board[i-1][j] == 1) c++;
                }
                else if(j == 0)
                {
                    if(m>1 && board[i][j+1] == 1) c++;
                    if(n>1 && board[i-1][j] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j+1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j+1] == 1) c++;
                    if(n>1 && board[i+1][j] == 1) c++;
                }
                else if(j == m-1)
                {
                    if(m>1 && board[i][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j-1] == 1) c++;
                    if(n>1 && board[i-1][j] == 1) c++;
                    if(n>1 && board[i+1][j] == 1) c++;
                }
                else
                {
                    if(m>1 && board[i][j+1] == 1) c++;
                    if(m>1 && board[i][j-1] == 1) c++;
                    if(n>1 && board[i+1][j] == 1) c++;
                    if(n>1 && board[i-1][j] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j+1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i+1][j-1] == 1) c++;
                    if(m>1 && n>1 && board[i-1][j+1] == 1) c++;
                }
                if(board[i][j] == 1)
                {
                    if(c < 2) temp.push_back(0);
                    else if(c == 2 || c == 3) temp.push_back(1);
                    else temp.push_back(0);
                }
                else if(board[i][j] == 0 && c == 3) temp.push_back(1);
                else temp.push_back(board[i][j]);
            }
            ans.push_back(temp);
        }
        board = ans;
    }