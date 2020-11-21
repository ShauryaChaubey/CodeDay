#include <bits/stdc++.h> 
using namespace std; 

void stringPermutation(string s, int left, int right)
{ 
	if (left == right) 
		cout << s << endl; 
	else
	{ 
		for (int i=left; i<=right; i++) 
		{ 
			swap(s[left], s[i]); 
			stringPermutation(s, left+1, right);
		} 
	} 
} 

int main() 
{ 
	string str; 
	cin >> str;
	int n = str.size(); 
	stringPermutation(str, 0, n-1); 
	return 0; 
} 

