/*
Input:
3
100 400 1000 1200
100 450 1000 1350
150 400 1200 1200
Output:
13
13
11
*/


#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int xa,xb,Xa,Xb;
	    cin >> xa >> xb >> Xa >> Xb;
	    int count=0;
	    count += Xa/xa;
	    count += Xb/xb;
	    cout << count << endl;
	}
}
