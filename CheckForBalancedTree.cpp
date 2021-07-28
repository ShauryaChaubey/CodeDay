bool f=true;
int solve(Node *root)
{
    if(root == NULL) return 0;
    
    int l = solve(root->left);
    int r = solve(root->right);
    
    if(abs(l-r) > 1)
    {
        f = false;
    }
    
    return max(l, r)+1;
}
bool isBalanced(Node *root)
{
    f = true;
    solve(root);
    return f;
}