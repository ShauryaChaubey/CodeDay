vector<int> dynamicArray(int n, vector<vector<int>> queries) 
{
    vector<vector<int>> a(n);
    int lastAnswer =0;
    int len = queries.size();
    vector<int> answer;
    for(int i=0; i<len; i++)
    {
        int k = (lastAnswer ^ queries[i][1]) % n;
        if(queries[i][0]==1)
        {
            a[k].push_back(queries[i][2]);
        }
        else if(queries[i][0]==2)
        {
            int index = queries[i][2]%(a[k].size());
            lastAnswer = a[k][index];
            answer.push_back(lastAnswer);
       }
    }
return answer;
}