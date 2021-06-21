int solve(Node* root, int &sum)
    {
        if(root == NULL)
          return 0;
        if(root->left == NULL && root->right == NULL) return root->data;
        if(root->left == NULL) return root->data + solve(root->right, sum);
        if(root->right == NULL) return root->data + solve(root->left, sum);
        
        int l = solve(root->left, sum);
        int r = solve(root->right, sum);
        
        int temp = root->data + max(l, r);
        sum = max(sum, l+r+root->data);
        
        return temp;
       
        
    }
    int maxPathSum(Node* root)
    {
        int sum=INT_MIN;
        int res = solve(root, sum);
        if(sum == INT_MIN) return res;
        return sum;
    }