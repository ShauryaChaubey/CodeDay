vector <int> zigZagTraversal(Node* root)
{
	vector<int> res;
	deque<Node*> q;
	int i=1;
	q.push_back(root);
	res.push_back(root->data);
	while(!q.empty())
	{
	    int n=q.size();
	    for(int j=0; j<n; j++)
	    {
	        Node *temp;
	        if(i%2 != 0)
	        {
	            temp = q.front();
	            q.pop_front();
	        }
	        else
	        {
	            temp = q.back();
	            q.pop_back();
	        }
	        if(i%2 == 0)
	        {
	           if(temp->left)
	           {
	               q.push_front(temp->left);
	               res.push_back(temp->left->data);
	           }
	           if(temp->right)
	           {
	               q.push_front(temp->right);
	               res.push_back(temp->right->data);
	           }
	        }
	        else
	        {
	           if(temp->right)
	           {
	               q.push_back(temp->right);
	               res.push_back(temp->right->data);
	           }
	           if(temp->left)
	           {
	               q.push_back(temp->left);
	               res.push_back(temp->left->data);
	           }
	        }
	        
	    }
	    i++;
	    
	    
	}
	return res;
}