#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	cin.ignore();
	//getchar();
	for(t=0;t<T;t++)
	{
	    string s,S="",str="";
	    getline(cin,s);
	    transform(s.begin(), s.end(), s.begin(), ::toupper);
	    for(int i=0;i<s.size();i++)
	    {
	        if(isalpha(s[i]) || isdigit(s[i]))
	        {
	            str += s[i];
	        }
	    }
	    S = str;
	    reverse(S.begin(), S.end());
	    if(str == S)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	    
	}
	
}