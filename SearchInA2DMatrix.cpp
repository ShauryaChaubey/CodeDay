class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n = matrix.size();
        if(n == 0 || matrix[n-1].size() == 0)
            return false;
        int i,j;
        for(i=0;i<n;i++)
        {
            j=0;
            if(matrix[i][0] <= target && target <= matrix[i][(matrix[i].size())-1])
            {
                while(j < matrix[i].size())
                {
                    if(matrix[i][j] == target)
                        return true;
                    else
                    {
                        j++;
                    }
                }
            }
        }
        return false;
    }
};