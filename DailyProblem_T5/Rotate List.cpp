//Rotate List


ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head || !head->next) return head;
        ListNode* d=head;
        int c=0;
        while(d)
        {
            c++;
            d = d->next;
        }
        if(c < k)
        {
            k = k%c; 
        }
        while(k--)
        {
            ListNode* current = head;
            int k = head->val;
            while(current->next)
            {
                int temp = current->next->val;
                current->next->val = k;
                k = temp;
                current = current->next;
            }
            head->val = k;
        }
        
        return head;
    }