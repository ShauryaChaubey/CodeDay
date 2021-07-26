void count1(TreeNode* root, vector<int> &v)
    {
        if(!root) return;
        if(!root->left && !root->right) v.push_back(root->val);
        if(root->left) count1(root->left, v);
        if(root->right) count1(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> v1;
        vector<int> v2;
        count1(root1, v1);
        count1(root2, v2);
        if(v1 == v2) return true;
        
        return false;
    }