#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    string s;
	    cin >> s;
	    string ch = "-1";
	    unordered_map<char, int> map;
	    for(int i=0;i<s.length();i++)
	    {
	        if(map.find(s[i]) == map.end())
	        {
	            map.insert(make_pair(s[i], 1)); 
	        }
	        else
	        {
	            ch = s[i];
	            break;
	        }
	    }
	    cout << ch << endl;
	}
}