struct Node* reverseList(struct Node *head)
{
    Node *prev,*next,*current;
    current = head;
    next = head;
    prev = NULL;
    while(next != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
