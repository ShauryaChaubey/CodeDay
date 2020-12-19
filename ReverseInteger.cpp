class Solution {
public:
    int reverse(int x) 
    {
        long long int l=0;
        if (x > 2147483647 || x < -2147483648)
           return 0;
    
        while(x != 0)
        {
            int temp = x%10;
            l = l*10 + temp;
            //i++;
            x = x/10;
        }
        if(l > 2147483647 || l < -2147483647)
            return 0;
        return l;
    }
};