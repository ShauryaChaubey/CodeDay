class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min = INT_MAX,max=0;
        if(prices.size() == 0)
            return 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] <= min && i != prices.size()-1)
            {
                min = prices[i];
            }
            else if(prices[i] > min)
            {
                if(prices[i]-min > max)
                {
                    max = prices[i]-min;
                }
            }
        }
        
         return max;
    }
};