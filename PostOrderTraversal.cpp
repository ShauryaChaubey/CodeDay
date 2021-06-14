vector<int> v;
vector<int> check(Node* root)
{
    if(root == NULL) return v;
   check(root->left);
   check(root->right);
   v.push_back(root->data);
   return v;
}
vector <int> postOrder(Node* root)
{
   v.clear();
   return check(root);
   //return v;
}