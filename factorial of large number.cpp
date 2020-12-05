#include <bits/stdc++.h>
using namespace std;

#define MAX 15000

int multiply_function(long int result[], long int result_size, long int x);
void factorial(int n)
{
    long int result[MAX], result_size=1,x;
    result[0]=1;
    for(x=2;x<=n;x++)
    {
        result_size = multiply_function(result, result_size, x);
    }
    for(long int i=result_size-1;i>=0;i--)
    {
        cout << result[i];
    }
    cout << endl;
}

int multiply_function(long int result[], long int result_size, long int x)
{
    long int carry=0;
    for(long int i=0;i<result_size;i++)
    {
        long int product = result[i]*x + carry;
        result[i] = product%10;
        carry = product/10;
    }
    while(carry)
    {
        result[result_size] = carry%10;
        carry /= 10;
        result_size++;
    }
    return result_size;
}

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	   int n;
	   cin >> n;
	   factorial(n);
	}
}