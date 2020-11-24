#include <iostream>
using namespace std;
 
//checking if the number is prime
bool primeCheck(int n)
{
   for(int i = 2; i < n/2; i++)
   {
      if(n%i == 0)
      {
         return false;
      }
   }
   return true;
}
 
//getting sum
int primeSumCheck(int n)
{
   int sumVal = 0;
   for(float i = 2; i <= n; i++)
   {
      if(primeCheck(i))
      {
         sumVal += i;
      }
   }
   return sumVal;
}
int main()
{
   int n;
   cin >> n;
   cout << primeSumCheck(n);
   return 0;
}
