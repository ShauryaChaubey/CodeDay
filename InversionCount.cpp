#include <bits/stdc++.h>

using namespace std;

long long int mergeSort(long long int* , long long int , long long int );

void merge(long long int*, long long int , long long int, long long int);

long long int inversionCount(long long arr[], long long N)
{
    long long int count=0;
    count = mergeSort(arr, 1, N);
    return count;
}
long long int mergeSort(long long int arr[], long long int start, long long int end)
{
    long long int mid,c=0;
    if(start < end)
    {
        mid = (start+end)/2;
        c += mergeSort(arr, start, mid);
        c += mergeSort(arr, mid+1, end);
        c += merge(arr, start, mid, end);
    }
    return c;
}

void merge(long long int arr[], long long int start, long long int mid, long long int end)
{
    long long int n1 = mid-start+1;
    long long int n2 = end - mid;

    long long int a1[10000000],a2[10000000],i,j,k;

    for(i=1; i<=n1; i++)
    {
        a1[i] = arr[start+i-1];
    }

    for(j=1; j<=n2; j++)
    {
        a2[j] = arr[mid+j];
    }

    a1[n1+1] = INT_MAX;
    a2[n2+1] = INT_MAX;

    i = 1;
    j = 1;

    for(k=start; k<=end; k++)
    {
        if(a1[i] <= a2[j])
        {
            arr[k] = a1[i];
            i++;
        }
        else
        {
            arr[k] = a2[j];
            j++;
        }
    }
}

int main()
{
   long long int arr[1000],n,i,count=0;
   cin >> n;
   for(i=0;i<n;i++)
   {
       cin >> arr[i];
   }
   count = inversionCount(arr,n);
   cout << count;
}

