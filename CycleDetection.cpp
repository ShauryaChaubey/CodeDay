bool has_cycle(SinglyLinkedListNode* head) 

{
    if(head == NULL)
       return false;
    //int k = head;
    for(int i=0;i<1000;i++)
    {
        if(head == NULL)
           return false;
        else 
          head = head->next;
    }

    return true;
}