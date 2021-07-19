 vector <int> bottomView(Node *root) 
    {
        //if(!root) return NULL;
        vector<int> res;
        unordered_map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0));
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                pair<Node*, int> temp=q.front();
                q.pop();
                if(temp.first->left)
                  q.push(make_pair(temp.first->left, temp.second-1));
                if(temp.first->right)
                  q.push(make_pair(temp.first->right, temp.second+1));
                //if(mp.find(temp.second) == mp.end())
                 mp[temp.second] = temp.first->data;
            }
        }
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
        return res;
    }