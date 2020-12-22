vector<int> levelOrder(Node* node)
{
  vector<int> arr;
  if(node == NULL)
    return arr;
  queue<Node *> q;
  q.push(node);
  while(!q.empty())
  {
      struct Node* temp = q.front();
      arr.push_back(temp -> data);
      q.pop();
      if(temp->left != NULL)
      {
          q.push(temp->left);
      }
      if(temp->right != NULL)
      {
          q.push(temp->right);
      }
      
  }
  return arr;
}