/*
Sample Input
3
2 5 10 
2 2
7 100 50
100 10 10 10 10 10 90 
6 100 40 
10 10 10 10 10 10

Sample Output
YES
NO
YES
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n,w,wr;
	    cin >> n >> w >> wr;
	    long long int wi[n+1];
	    for(int i=0;i<n;i++)
	       cin >> wi[i];
	    if(wr >= w)
	       cout << "YES" << endl;
	    else
	    {
	        long long int i=0,sum=0;
	        sort(wi, wi+n);
	        while(i<n-1)
	        {
	            if(wi[i] == wi[i+1])
	            {
	                sum += (wi[i]*2);
	                i += 2;
	            }
	            else
	              i++;
	        }
	        if((sum+wr) >= w)
	           cout << "YES" << endl;
	        else
	           cout << "NO" << endl;
	    }
	}
}
