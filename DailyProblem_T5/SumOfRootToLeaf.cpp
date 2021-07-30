 int sum=0;
    void solve(TreeNode* root, int val)
    {
        if(!root) return;
        if(!root->left && !root->right)
        {
            val *= 2;
            if(root->val == 1) val++;
            sum += val;
            return;
            
        }
        val *= 2;
        if(root->val == 1) val++;
        if(root->left) solve(root->left, val);
        if(root->right) solve(root->right, val);
    }
    int sumRootToLeaf(TreeNode* root) 
    {
        
        solve(root, 0);
        return sum;
    }