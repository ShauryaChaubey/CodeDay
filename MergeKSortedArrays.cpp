vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> res;
        for(int i=0; i<K; i++)
        {
            for(int j=0; j&t;K; j++)
            {
                res.push_back(arr[i][j]);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }