 //Add Two Numbers(LL)
 
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0;
        ListNode* temp = new ListNode();
        ListNode* head = temp;
        while(l1 || l2 || carry)
        {
            int sum=0;
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            if(carry > 0) sum += carry;
            ListNode* node = new ListNode(sum%10);
            carry = sum/10;
            temp->next = node;
            temp = temp->next;
        }
        return head->next;
    }