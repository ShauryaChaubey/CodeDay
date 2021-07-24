 int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        if(!root) return sum;
        if(root->val <= high && root->val >= low) sum += root->val;
        if(root->left) rangeSumBST(root->left, low, high);
        if(root->right) rangeSumBST(root->right, low, high);
        return sum;
    }