 void solve(vector<vector<int>> &pic, int row, int column, int sr, int sc, 
    int oldColor, int newColor)
    {
        if(sr<0 || sc<0 || sr>=row || sc>=column)
          return;
        if(pic[sr][sc] != oldColor)
          return;
        if(pic[sr][sc] == newColor)
          return;
        pic[sr][sc] = newColor;
        
        solve(pic, row, column, sr+1, sc, oldColor, newColor);
        solve(pic, row, column, sr, sc+1, oldColor, newColor);
        solve(pic, row, column, sr-1, sc, oldColor, newColor);
        solve(pic, row, column, sr, sc-1, oldColor, newColor);
        
        return;
          
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
       // vector<vector<int>> pic = image;
        int oldColor = image[sr][sc];
        int row = image.size();
        int column = image[0].size();
        solve(image, row, column, sr, sc, oldColor, newColor);
        return image;
    }