//iterative approch

int height(struct Node* node)
    {
       int h=0;
       queue<Node*> q;
       if(node)
        q.push(node);
      while(q.size())
      {
          int size = q.size();
          while(size--)
          {
              if(q.front()->left)
                q.push(q.front()->left);
              if(q.front()->right)
                q.push(q.front()->right);
              q.pop();
          }
          h++;
      }
      return h;
    }

//recursive approch

    int height(struct Node* node)
    {
        if(node == NULL)
          return 0;
        int lt = height(node->left);
        int rt = height(node->right);
        return 1 + max(lt, rt);
    }