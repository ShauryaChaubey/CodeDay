vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    vector<vector<int>> res;;
    for(int i=0; i<row; i++)
    {
        vector<int> temp;
        for(int j=0; j<col; j++)
          temp.push_back(M[i][j]);
        if(find(res.begin(), res.end(), temp) == res.end()) 
          res.push_back(temp);
    }
    return res;
}