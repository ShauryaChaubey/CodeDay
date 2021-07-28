void solve(Node *root, int l, int h, int *count)
{
    if(!root) return;
   if(root->data <= h && root->data >= l) (*count)++;
   if(root->left) solve(root->left, l, h, count);
   if(root->right) solve(root->right, l, h, count);
   //return count;
}
int getCount(Node *root, int l, int h)
{
  //int count=0;  
  if(!root) return 0;
  int c=0;
  solve(root, l, h, &c);
  return c;
  
}
