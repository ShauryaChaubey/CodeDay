//when you have to swap two values of nodes, try using one node and swap using ->next
//rather than taking two nodes
//Wrong approch: newnode Current = head, newnode currentN = head->next; swap(Current, currentN);
//Right approch: newnode Current = head; swap(Current, Current->next);



ListNode* swapPairs(ListNode* head) 
    {
        if(!head || !head->next) return head;
        ListNode* current=head;
        while(current && current->next)
        {
            int temp = current->val;
            current->val = current->next->val;
            current->next->val = temp;
            current = current->next->next;
        }
        return head;
    }