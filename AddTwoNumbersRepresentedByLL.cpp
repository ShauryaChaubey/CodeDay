Node* reverse(Node* head)
    {
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        /*Node *c,*p;
        for(c = head; c != NULL; c = c->next)
        {
            for(p = c->next; p!= NULL; p = p->next)
               swap(c->data, p->data);
        }*/
        return prev;
        
        
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        
        int carry=0, sum=0;
        
        //Node *temp = new Node(d);
        Node* start = NULL;
        Node* end = NULL;
        while(first != NULL || second != NULL)
        {
            int a = (first != NULL)?first->data:0;
            int b = (second != NULL)?second->data:0;
            
            sum = carry + (a+b);
            carry = (sum >= 10)?1:0;
            sum %= 10;
            
            if(start == NULL)
            {
                start = new Node(sum);
                end = start;
            }
            else
            {
                end->next = new Node(sum);
                end = end->next;
            }
            if(first != NULL)
               first = first->next;
            if(second != NULL)
               second = second->next;
            
        }
        
        if(carry > 0)
            end->next = new Node(carry);
        start = reverse(start);
        
        //reverse(temp);
        return start;
    }