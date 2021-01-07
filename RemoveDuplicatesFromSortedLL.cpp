Node *removeDuplicates(Node *root)
{
    Node *head = root->next;
    Node *prev = root;
    while(head != NULL)
    {
        if(prev == head)
        {
            prev->next = head->next;
            head = prev->next;
        }
        else
        {
            prev = head;
            head = head->next;
        }
    }
    return root;
 
}