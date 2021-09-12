int getNthFromLast(Node *head, int n)
{
    Node *current = head;
    Node *temp = head;
    while(n--)
    {
        if(!temp) return -1;
        temp = temp->next;
    }
    while(temp)
    {
        temp = temp->next;
        current = current->next;
    }
    return current->data;
}