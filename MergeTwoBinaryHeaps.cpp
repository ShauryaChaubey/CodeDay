void heapify(int merged[], int n, int i)
{
    if(i >= n)
      return;
    int largest = i;
    int lf = 2*i + 1;
    int rt = 2*i + 2;
    if(lf < n && merged[lf] > merged[largest])
      largest = lf;
    if(rt < n && merged[rt] > merged[largest])
      largest = rt;
    if(largest != i)
    {
       swap(merged[i], merged[largest]);
       heapify(merged, n, largest); 
    }
}
void mergeHeaps(int merged[], int a[], int b[], int n, int m) 
{
    for(int i=0; i<n; i++)
      merged[i] = a[i];
    for(int i=0; i<m; i++)
      merged[i+n] = b[i];
    int strt = (m+n)/2;
    for(int i=strt; i>=0; i--)
       heapify(merged, n+m, i);
}