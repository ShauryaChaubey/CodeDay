/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    
    int count = 0;
    SinglyLinkedListNode* current, *prev;
    current = head->next;
    prev = head;
    if(position == 0)
    {
        free(prev);
        return current;
    }
    while(count < position-1)
    {
        prev = current;
        current = current->next;
        count++;
    }
    prev->next = current->next;
    free(current);
    return head;

}

