vector<int> v;
void check(Node* root)
{
    if(root == NULL)
      return;
    v.push_back(root->data);
    check(root->left);
    check(root->right);
}
vector <int> preorder(Node* root)
{
  v.clear();
  check(root);
  return v;
}