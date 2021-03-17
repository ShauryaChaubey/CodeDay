#include<bits/stdc++.h>

using namespace std;
int main()
{
    map<string, int> mp;
    string s;
    int i=0;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
            string temp = s.substr(j,i);
            if(mp.find(temp) == mp.end())
            {
                mp.insert(make_pair(temp,i));
            }
        }
    }
    string str;
    str += s[0];
    str += s[s.size()-1];
    if(mp.find(str) == mp.end())
    {
        mp.insert(make_pair(str,i));
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++)
       cout << itr->first << endl; 
    cout << s << endl;
    return 0;
}