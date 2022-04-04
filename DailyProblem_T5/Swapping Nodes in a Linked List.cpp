ListNode* swapNodes(ListNode* head, int k) 
    {
        int temp=0, c=0;
        ListNode* current = head;
        while(current)
        {
            c++;
            if(c == k)
            {
                temp = current->val;
                cout << temp;
            }
            current = current->next;
        }
        current = head;
        c = c-k;
        while(c--)
        {
            current = current->next;
        }
        int t=current->val;
        current->val = temp;
        c=0;
        current = head;
        while(current)
        {
            c++;
            if(c == k)
            {
                current->val = t;
            }
            current = current->next;
        }
        return head;
    }