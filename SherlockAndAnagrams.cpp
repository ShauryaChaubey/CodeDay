#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c=0;
        string s;
        cin >> s;
        map<string, int> mp;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=1; j<=(s.size()-i); j++)
            {
                string str=s.substr(i, j);
                sort(str.begin(), str.end());
                if(mp.find(str) != mp.end()) c += mp[str]++;
                else
                {
                    //cout << str << " ";
                    
                    mp.insert({str, 1});
                } 
            }
        }
        
        cout << c << endl;
    }
}
