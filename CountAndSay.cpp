class Solution {
public:
    string countAndSay(int n) 
    {
        string str;
        if(n == 1)
            return "1";
        if(n == 2)
            return "11";
        string temp = "11";
        for(int i=3;i<=n;i++)
        {
            int j=0;
            while(j < temp.size())
            {
                int c=1;
                while(temp[j] == temp[j+1] && j < temp.size()-1)
                {
                    c++;
                    j++;
                }
                    
                str += to_string(c);
                str += temp[j];
                j++;
            }
            if(i == n)
                return str;
            else
            {
                temp = str;
                str = "";
            }
        }
        return "";
    }
};