#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin >> s;
    cin >> t;
    int k;
    cin >> k;
    int i=0,j=0,c=0;
    while(i<s.size() && j<t.size())
    {
        if(s[i] == t[j])
          c++;
        else 
          break;
        i++;
        j++;
    }
    
    c = (s.size()+t.size() - 2*c);
    //cout << c;
    if(c<=k && (((k-c)%2) == 0 || c == 0 || t.size()<c))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

