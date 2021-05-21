int intersectPoint(Node* head1, Node* head2)
{
    Node* LL1 = head1;
    Node* LL2 = head2;
    bool flg = false;
    int c1=0,c2=0;
    while(LL1 != NULL)
    {
        c1++;
        LL1 = LL1->next;
    }
    while(LL2 != NULL)
    {
        c2++;
        LL2 = LL2->next;
    }
    LL1 = head1;
    LL2 = head2;
    if(c1 > c2)
    {
        int k = c1-c2;
        while(k)
        {
            LL1 = LL1->next;
            k--;
        }
        //return LL1->next->data;
    }
    else if(c2 > c1)
    {
        int k = c2-c1;
        while(k)
        {
            LL2 = LL2->next;
            k--;
        }
        //return LL2->next->data;
    }
    while(LL1 && LL2)
    {
        if(LL1 == LL2)
          return LL1->data;
        LL1 = LL1->next;
        LL2 = LL2->next;
    }
    return -1;
    
}