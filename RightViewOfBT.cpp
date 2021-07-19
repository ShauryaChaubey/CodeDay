void recurse(Node* root, vector<int> &res)
    {
        if(!root) return;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0; i<n; i++)
            {
                Node* temp = q.front();
                q.pop();
                if(i == 0) res.push_back(temp->data);
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> res;
       recurse(root, res);
       return res;
    }