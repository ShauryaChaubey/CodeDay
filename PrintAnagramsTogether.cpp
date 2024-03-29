vector<vector<string>> Anagrams(vector<string>& string_list) 
{
    unordered_map<string, vector<string>> mp;
    for(int i=0; i<string_list.size(); i++)
    {
        string s = string_list[i];
        sort(s.begin(), s.end());
        mp[s].push_back(string_list[i]);
    }
    vector<vector<string>> res;
    for(auto it=mp.begin(); it != mp.end(); it++)
    {
        res.push_back(it->second);
    }
    return res;
}