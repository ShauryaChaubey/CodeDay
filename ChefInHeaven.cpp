/*
Sample Input:
3
2
10
3
001
4
0100

Sample Output
YES
NO
YES

Explanation: When 50% of the string becomes one return yes.
*/

#include <iostream>
using namespace std;

int main() 
{
	long long int t;
	cin >> t;
	while(t--)
	{
	    long long int n,c1=0,c0=0;
	    int f=0;
	    cin >> n;
	    string s;
	    cin >> s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == '1')
	          c1++;
	        else
	          c0++;
	        if(c1 == c0)
	        {
	            f = 1;
	            break;
	        }
	    }
	    if(f == 1)
	    {
	        cout << "YES" << endl;
	    }
	    else if(c1 >= c0)
	       cout << "YES" << endl;
	    else
	       cout << "NO" << endl;
	}
}
