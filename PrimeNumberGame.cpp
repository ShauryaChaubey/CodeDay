/*
Input:
N=5
[5,5]
[8,10]
[13,16]
[2,20]
[5,25]
Output:
0 //Min prime num=5, Max prime num=5, diff = (5-5) = 0
-1 //Min prime num=NA, Max prime num=NA, -1(N0 prime num in the range)
0  //Min prime num=13, Max prime num=13, diff = (13-13) = 0
17 //Min prime num=2, Max prime num=19, diff = (19-2) = 17
18 //Min prime num=5, Max prime num=23, diff = (23-5) = 18
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		int Max=-1, Min = -1,count=0;
		for(int i=a; i<=b; i++)
		{
			int j=2;
            for(; j<i; j++)
			{
				if(i%j == 0)
				  break;
			}
			if(j == i)
			{
				Min = i;
				break;
			}
		}
		for(int i=b; i>=a; i--)
		{
			int j=2;
            for(; j<i; j++)
			{
				if(i%j == 0)
				  break;
			}
			if(j == i)
			{
				Max = i;
				break;
			}
		}
		if(Max == -1 && Min == -1)
		  cout << -1 << endl;
		else if(Max == -1 && Min == -1)
		  cout << 0 << endl;
		else
		  cout << Max-Min << endl;
		
	}
}
