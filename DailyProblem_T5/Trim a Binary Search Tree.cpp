TreeNode* trimBST(TreeNode* root, int low, int high)
    {
    // The logic to solve these type of questions is to go to the left most or bottom most
    // node and start building our solution from there.
    // Assume you are at a node where you have solved your left and right subtree, now all you have to do         is to solve the current node.
    // As the tree is a binary search tree 🌲 , we can easily eliminate the left and right subtrees that         are not in range[low, high].
        
        if(!root) return root;
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        if(root->val < low)
            return root->right;
        else if(root->val > high)
            return root->left;
        
        return root;
    }