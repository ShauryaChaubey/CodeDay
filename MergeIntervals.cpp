class Solution {
public:
    static bool compare(vector<int>& V1, vector<int>& V2)
    {
        return V1[0]<V2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end(), compare);
        vector<vector<int>>v;
        int f=0;
        for(auto i:intervals)
        {
            
            if(!v.empty() && v.back()[1] >= i[0])
            {
                v.back()[1] = max(v.back()[1], i[1]);
            }
            else
            {
                v.push_back(i);
            }
        }
        return v;
    }
};