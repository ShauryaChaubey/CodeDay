bool solve(struct Node *root, int target, vector<int> &v)
    {
        if(!root) return 0;
        if(!root->left && !root->right && root->data == target) return 1;
        if(root->data == target) return 1;
        
        if(solve(root->left, target, v) || solve(root->right, target, v))
        {
            v.push_back(root->data);
            return 1;
        }
        return 0;
    }
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int> v;
         solve(root, target, v);
         return v;
    }