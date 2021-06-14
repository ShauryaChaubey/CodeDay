Node* reverse(Node *head)
    {
        Node *current=head;
        Node *previous=NULL;
        Node *next=head;
        while(next)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
        
    }
    bool isPalindrome(Node *head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *last=reverse(slow);
        Node *current = head;
        while(last)
        {
            if(current->data != last->data)
               return false;
            last = last->next;
            current = current->next;
            //count--;
        }
        return true;
    }