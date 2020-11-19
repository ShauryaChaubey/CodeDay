#include <iostream>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    int N,a[1000],i,temp=0;
	    cin >> N;
	    for(i=0;i<N;i++)
	    {
	        cin >> a[i];
	    }
	    temp = a[N-1];
	    for(i=N-1;i>0;i--)
	    {
	        a[i] = a[i-1];
	    }
	    a[0] = temp;
	    for(i=0;i<N;i++)
	    {
	        cout <<  a[i] << " ";
	    }
	    cout << endl;
	}
}