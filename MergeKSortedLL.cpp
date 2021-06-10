Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0; i<K; i++)
        {
             Node *current = arr[i];
            while(current != NULL)
            {
               q.push(current->data);
               current = current->next;
            }
        }
        Node *start=new Node(0);
        Node *head=start;
        while(!q.empty())
        {
            head->next = new Node(q.top());
            head = head->next;
            q.pop();
        }
        return start->next;
    }