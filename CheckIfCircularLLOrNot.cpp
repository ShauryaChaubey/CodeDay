bool isCircular(struct Node *head)
{
    struct Node *copy=head;
    struct Node *current=head->next;
    while(current)
    {
        if(current == copy) return true;
        current = current->next;
    }
    return false;
}