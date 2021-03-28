void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root)
      return;
    else if(root->key == key)
    {
        if(root->left)
        {
            pre = root->left;
            while(pre->right)
                pre = pre->right;
        }
        if(root->right)
        {
            suc = root->right;
            while(suc->left)
                suc = suc->left;
        }
    }
    else if(root->key > key)
    {
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    }
    else if(root->key < key)
    {
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }

}