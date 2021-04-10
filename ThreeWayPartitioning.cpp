void threeWayPartition(vector<int>& array,int a, int b)
    {
        int k=0,j=array.size()-1;
        for(int i=0;i<=j;i++)
        {
            if(array[i] < a)
            {
                swap(array[i], array[k++]);
            }
            else if(array[i] > b)
            {
                swap(array[i--], array[j--]);
            }
        }
    }