bool isHeap(struct Node * tree)
    {
        if(!tree) return true;
        if(tree->left && tree->right)
        {
            if(tree->left->data < tree->data && tree->right->data < tree->data)
               return true && isHeap(tree->left) && isHeap(tree->right);
            else
               return false; 
        }
        if(tree->left)
        {
          if(tree->left->data < tree->data)
            return true && isHeap(tree->left);
          else
            return false;
        }
        else if(tree->right)
        {
          return false;
        }
        else
          return true;

    }