void solve(struct Node* root, struct Node* &node1,
               struct Node* &node2, struct Node* &prev)
               {
                   if(!root) return;
                   if(root->left) solve(root->left, node1, node2, prev);
                   if(prev && prev->data > root->data)
                   {
                       if(!node1) node2=root, node1=prev;
                       else node2=root;
                   }
                   prev = root;
                   if(root->right) solve(root->right, node1, node2, prev);
               }
    void correctBST(struct Node* root )
    {
        struct Node* node1=NULL, *node2=NULL, *prev=NULL;
        solve(root, node1, node2, prev);
        swap(node1->data, node2->data);
        //return root;
    }