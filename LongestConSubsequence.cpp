int findLongestConseqSubseq(int arr[], int N)
{
  sort(arr, arr+N);
  int c=0,Max=0;
  for(int i=0;i<N;i++)
  {
      if(arr[i+1] == arr[i]+1)
      {
          c++;
          Max = max(c,Max);
      }
      else if((arr[i+1]-arr[i]) > 1)
      {
          c = 0;
      }
  }
  return Max+1;
}