public:
    int areMirror(Node* a, Node* b) 
    {
        if(a == b || !a && !b) return 1;
        if(a && b && a->data == b->data)
          return areMirror(a->left, b->right) && areMirror(a->right, b->left);
        return 0;
    }