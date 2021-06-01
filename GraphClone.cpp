void dfs(vector<Node*> &visit, Node* res, Node* node)
    {
        visit[res->val] = res;
        for(auto it:node->neighbors)
        {
            if(visit[it->val] == NULL)
            {
                Node* temp = new Node(it->val);
                (res->neighbors).push_back(temp);
                dfs(visit, temp, it);
            }
            else
            {
                (res->neighbors).push_back(visit[it->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) 
    {
        if(node == NULL)
            return NULL;
        vector<Node*> visit(101,NULL);
        Node* res = new Node(node->val);
        dfs(visit, res, node);
        return res;
    }