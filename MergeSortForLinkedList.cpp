Node* merge(Node* n1, Node* n2)
    {
        if(!n2)
          return n1;
        if(!n1)
          return n2;
        if(n1->data < n2->data)
        {
          n1->next = merge(n1->next, n2);
          return n1;
        }
        else
        {
            n2->next = merge(n1, n2->next);
            return n2;
        }
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) 
    {
        if(head == NULL || head->next == NULL)
          return head;
        Node* fast = head->next;
        Node* slow = head;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        Node* mid = slow->next;
        slow->next = NULL;
        return merge(mergeSort(head), mergeSort(mid));
    }