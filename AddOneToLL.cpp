void reverse(Node *head)
    {
        Node *c = head;
        Node *p;
        
        for(c=head; c != NULL; c=c->next)
        {
            for(p=c->next; p != NULL; p=p->next)
            {
                swap(c->data, p->data);
            }
        }
    }
    Node* addOne(Node *head) 
    {
        Node *current;
        reverse(head);
        current = head;
        if(current->data < 9)
           current->data = current->data + 1;
        else
        {
           current->data = current->data + 1;
           while(current->next != NULL)
           {
               if(current->data == 10)
               {
                   current->data = 0;
                   current->next->data = current->next->data + 1;
                   current = current->next;
               }
               else
                 break;
           }
        }
        reverse(head);
        return head;
    }