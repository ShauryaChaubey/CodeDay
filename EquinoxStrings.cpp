/*
Sample Input
2
4 1 3
ABBBCDDE
EARTH
INDIA
UUUFFFDDD
2 5 7
SDHHD
XOXOXOXO

Sample Output
DRAW
ANURADHA
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    long long int a,b,ar=0,sr=0;
	    cin >> n >> a >> b;
	    //int s[n+1];
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin >> s;
	        if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' 
	        || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
	        {
	            sr += a;
	        }
	        else
	        {
	            ar += b;
	        }
	    }
	    if(sr > ar)
	      cout << "SARTHAK" << endl;
	    else if(sr < ar)
	      cout << "ANURADHA" << endl;
	    else
	      cout << "DRAW" << endl;
	       
	    
	}
}
