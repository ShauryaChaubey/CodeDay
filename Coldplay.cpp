/*Sample Input
3
10 5
10 6
9 10
Sample Output
2
1
0*/


#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int m,s;
	    cin >> m >> s;
	    cout << (m/s) << endl;
	}
}
