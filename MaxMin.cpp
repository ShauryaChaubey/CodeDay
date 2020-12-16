int maxMin(int k, vector<int> arr) 
{
    int diff=0;
    sort(arr.begin(), arr.end());
    int Min = arr[arr.size()-1] - arr[0];
    for(int i=0;i<arr.size()-k+1;i++)
    {
        diff = arr[i+k-1]-arr[i];
        //cout << diff << endl;
        Min = min(diff, Min);
    }
    return Min;
}