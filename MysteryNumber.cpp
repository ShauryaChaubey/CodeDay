#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=25, s_len=2;
    string s="55";
    int i=0, j=s_len-1, count=0;
    int k = n;
    while(s_len)
    {
        i = k%10;
        for(j=s_len-1; j>=0; j--)
        {
            if(s[j]-'0' == i || (i == 6 &&  s[j]-'0' == 9) || (i == 5 && s[j]-'0' == 2) 
            || (i == 9 && s[j]-'0' == 6) || (i == 2 && s[j]-'0' == 5))
            {
                k /= 10;
                i = k%10;
                s.erase(s.begin() + j);
            }
        }
        cout << endl;
        if(k == 0)
        {
            count++;
            k=n;
        }
        else
          break;
    }
    cout << count;
}
