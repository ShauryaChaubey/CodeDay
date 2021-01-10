struct node *reverse (struct node *head, int k)
{ 
    node *prev,*next,*current,*stop;
    current = head;
    prev = NULL;
    next = head;
    int j=k,f=0;
    while(next != NULL && j != 0)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        j--;
    }
    if(prev != NULL)
    {
        head->next = reverse(next, k);
    }
    return prev;
}
