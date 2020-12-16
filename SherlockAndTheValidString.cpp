string isValid(string s) 
{
    int arr[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        arr[s[i]-'a']++;
    }
    int max=INT_MIN,min=INT_MAX,secMax=0,minCount=0,maxCount=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i] != 0)
        {
            if(arr[i] == max)
               maxCount++;
            else if(arr[i] > max)
            {
                maxCount = 1;
                secMax = max;
                max = arr[i];
            }
            else if(arr[i] > secMax && arr[i] < max)
            {
                secMax = arr[i];
            }
            if(arr[i] == min)
                minCount++;
            else if(min > arr[i])
            {
                min = arr[i];
                minCount = 1;
            } 
        }
    }
    if(max == min)
      return "YES";
    if((max-min == 1 && maxCount == 1) || 
    (min == 1 && minCount == 1 && secMax == min))
      return "YES";
    
    return "NO";
}