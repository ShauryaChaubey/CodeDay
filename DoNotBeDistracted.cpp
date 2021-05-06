/*Input:
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB

Output:
NO
NO
YES
YES
YES
*/




#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i=0,f=0;
        cin >> n;
        string s;
        cin >> s;
        while(i < n)
        {
            if(s[i] != s[i+1])
            {
                for(int j=i+2;j<n;j++)
                {
                    if(s[j] == s[i])
                    {
                        f = 1;
                        break;
                    }
                }
            }
            else if(s[i] != s[i+1])
            {
                i++;
            }
            if(f == 0)
              i++;
            else
              break;
        }
        if(f == 1)
          cout << "NO" << endl;
        else
          cout << "YES" << endl;
    }
}
