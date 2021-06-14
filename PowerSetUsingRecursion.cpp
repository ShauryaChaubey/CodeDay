vector <string> recurse(string s, string str, vector<string> &res)
{
    if(s.size() == 0)
    {
        //res.push_back(str);
        return res;
    }
      
    string op1=str;
    string op2=str;
    op1 += s[0];
    res.push_back(op1);
    s.erase(s.begin() + 0);
    recurse(s,op1,res);
    recurse(s,op2,res);
}
vector <string> powerSet(string s)
{
    vector<string> res;
    string str="";
    recurse(s, str, res);
    return res;
}