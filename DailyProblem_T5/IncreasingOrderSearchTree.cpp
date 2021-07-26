vector<int> v;
    TreeNode* newNode(int value)
    {
        TreeNode *node = new TreeNode;
        node->val = value;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    TreeNode* insert(TreeNode* head, int value)
    {
        TreeNode *nNode = newNode(value);
        head->right = nNode;
        return nNode;
    }
    void solve(TreeNode* root)
    {
        if(!root) return;
        if(root->left) solve(root->left);
        v.push_back(root->val);
        if(root->right) solve(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) 
    {
        
        solve(root);
        TreeNode *start = newNode(v[0]);
        TreeNode *end = start;
        //end = end->right;
        for(int i=1; i<v.size(); i++)
        {
            end = insert(end,v[i]);
        }
        return start;
    }