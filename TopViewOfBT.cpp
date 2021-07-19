vector<int> res;
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    /*void getRight(Node *root, int k)
    {
        if(root == NULL) return; 
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                Node* temp = q.front();
                q.pop();
                if(i == 0 && temp->data != k)
                  res.push_back(temp->data);
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
    }*/
    void getLeft(Node *root)
    {
        if(root == NULL) return; 
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        q.push(make_pair(root, 0));
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                pair<Node*, int> temp = q.front();
                q.pop();
                if(mp.find(temp.second) == mp.end())
                  mp[temp.second] = temp.first->data;
                if(temp.first->left) 
                   q.push(make_pair(temp.first->left, temp.second-1));
                if(temp.first->right) 
                   q.push(make_pair(temp.first->right, temp.second+1));
            }
        }
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
    }
    vector<int> topView(Node *root)
    {
        res.clear();
        getLeft(root);
        return res;
    }