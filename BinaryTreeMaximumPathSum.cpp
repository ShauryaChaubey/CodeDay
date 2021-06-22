 int solve(TreeNode* root, int &sum)
    {
        if(root == NULL)
            return 0;
        int l = solve(root->left, sum);
        int r = solve(root->right, sum);
        
        int temp = max(root->val, (root->val + max(l, r)));
        int ans = max(temp, (l+r+root->val));
        sum = max(sum, ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) 
    {
        int sum=INT_MIN;
        solve(root, sum);
        return sum;
    }