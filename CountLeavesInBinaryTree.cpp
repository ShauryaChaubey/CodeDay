int countLeaves(Node* root)
{
   if(!root) return 0;
   if(!root->left and !root->right) 
     return 1;
   else 
     return countLeaves(root->left) + countLeaves(root->right);
}