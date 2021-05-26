vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    stack<int> s;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        s.push(temp->data);
        q.pop();
        if(temp->right != NULL)
          q.push(temp->right);
        if(temp->left != NULL)
          q.push(temp->left);
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    return v;
}