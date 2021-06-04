/*
Input: 
V = coronavirus
N = 3
abcde
crnaus
onaos

Output:
NEGATIVE
POSITIVE
NEGATIVE
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
	string V;
	//cin >> V;
	vector<char> v;
	for(int i=0; i<V.size(); i++)
	   v.push_back(V[i]);
	int N;
	cin >> N;
	while(N--)
	{
		string s;
		cin >> s;
		auto it = v.begin();
		int i=0;
		while(i < s.size())
		{
		    it = find(it, v.end(), s[i]);
			if(it != v.end())
			{
			   i++;
			}
			else
			  break;
		}
		cout << i;
		if(i == s.size())
		  cout << "POSITIVE" << endl;
		else
		  cout << "NEGATIVE" << endl;
	}
}