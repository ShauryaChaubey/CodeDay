Node* findIntersection(Node* head1, Node* head2)
{
    Node *start=NULL;
    Node *end=NULL;
    while(head1 != NULL && head2 != NULL)
    {
       if(head1->data == head2->data)
        {
            if(start == NULL)
            {
                start = new Node(head1->data);
                end = start;
            }
            else
            {
                end->next = new Node(head1->data);
                end = end->next;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->data > head2->data)
          head2 = head2->next;
        else
          head1 = head1->next;
    }
    return start;
}