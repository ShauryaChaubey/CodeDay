#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0;t<T;t++)
    {
        string s,S;
        cin >> s >> S;
        int i=0,j=0,k=0,f=0;
        while(i<s.length() && j<S.length())
        {
            if(f == 0)
            {
                cout << s[i];
                i++;
                f = 1;
            }
            else if(f == 1)
            {
                cout << S[j];
                j++;
                f = 0;
            }
            //k++;
        }
        for(k=i;k<s.length();k++)
        {
            cout << s[k];
        }
        for(k=j;k<S.length();k++)
        {
            cout << S[k];
        }
        cout << endl;
    }
}