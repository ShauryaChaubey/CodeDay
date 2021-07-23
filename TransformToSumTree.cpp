int sum(Node *node)
    {
        if(!node)
        {
            return 0;
        }
        int s=node->data;
        int lf = sum(node->left);
        int rt = sum(node->right);
        node->data = lf+rt;
        return s+node->data;
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        sum(node);
    }