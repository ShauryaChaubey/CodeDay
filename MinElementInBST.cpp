int minValue(Node* root)
{
    //int k=0;
    if(root->left == NULL)
       return root->data;
    while(root->left != NULL)
      root = root->left;
    return root->data;
}