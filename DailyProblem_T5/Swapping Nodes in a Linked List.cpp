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

//Using vector
     ListNode* swapNodes(ListNode* head, int k) 
    {
        vector<int> v;
        ListNode* current = head;
        while(current)
        {
            v.push_back(current->val);
            current = current->next;
        }
        swap(v[k-1], v[v.size()-k]);
        current = head;
        int i=0;
        while(current)
        {
            current->val = v[i++];
            current = current->next;
        }
        return head;
    }


//Two pointer approch
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* current = head;
        ListNode* lt = head;
        ListNode* rt = head;
        int c=1;
        while(current)
        {
            if(c < k) lt = lt->next;
            if(c > k) rt = rt->next;
            c++;
            current = current->next;
        }
        cout << lt->val << " " << rt->val;
        int temp = lt->val;
        lt->val = rt->val;
        rt->val = temp;
        return head;
    }