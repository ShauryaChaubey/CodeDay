int maxMeetings(int start[], int end[], int n) 
        {
            multimap<int, int> mp;
            int count = 1;
            for(int i=0; i<n; i++)
            {
                mp.insert({end[i], start[i]});
            }
            int i=0;
            for(auto itr=mp.begin(); itr!=mp.end(); itr++,i++)
            {
                start[i] = itr->second;
                end[i] = itr->first;
            }
            int j=0;
            for(i=1;i<n;i++)
            {
                if(start[i] > end[j])
                {
                    count++;
                    j = i;
                }
            }
            return count;
        }