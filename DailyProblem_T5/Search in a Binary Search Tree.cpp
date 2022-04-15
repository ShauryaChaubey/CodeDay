TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(!root) return nullptr;
        if(root->val > val) return searchBST(root->left, val);
        else if(root->val < val) return searchBST(root->right, val);
        return root;
    }