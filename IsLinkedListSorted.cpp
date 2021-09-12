bool isSorted(Node * head)
{
    if(!head) return true;
    Node* curr = head;
    while(curr->next != NULL)
    {
        if(curr->data >= curr->next->data)
        {
            curr = curr->next;
        }
        else break;
    }
    if(curr->next == NULL) return true;
    curr = head;
    while(curr->next != NULL)
    {
        if(curr->data <= curr->next->data)
        {
            curr = curr->next;
        }
        else break;
    }
    if(curr->next == NULL) return true;
    return false;
}