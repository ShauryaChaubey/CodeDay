//Remove Duplicates from Sorted List II

//Approch:
//Sentinel head + predessor
//In this approch there is a possibility that u have to delete head node, so sentinel head is one pseudo head(temp in the solution below)
//that can be used.


ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* current=head;
        ListNode* temp = new ListNode(0, head);
        ListNode* prev=temp;
        
        while(current)
        {
            if(current->next != NULL && current->val == current->next->val)
            {
                while(current->next != NULL && current->val == current->next->val)
                {
                    current = current->next;
                }
                prev->next = current->next;
            }
            else
              prev = prev->next;
            current = current->next;
        }
        return temp->next;
    }