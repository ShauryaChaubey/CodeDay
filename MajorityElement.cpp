int majorityElement(int a[], int size)
{
    
    unordered_map<int, int> maps;
    for(int i=0;i<size;i++)
    {
        if(maps.find(a[i]) == maps.end())
            maps.insert(make_pair(a[i], 1));
        else
        {
            maps[a[i]]++;
        }
    }
    for(auto& it:maps)
    {
        if(it.second > size/2)
          return it.first;
    }
    return -1;
}