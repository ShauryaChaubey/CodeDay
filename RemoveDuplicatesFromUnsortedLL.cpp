//O(n^2) Approch

Node * removeDuplicates( Node *head) 
    {
        Node *current = head;
        Node *prev = NULL;
        while(current != NULL)
        {
            prev = current;
            while(prev->next != NULL)
            {
                if(prev->next->data == current->data)
                {
                    prev->next = prev->next->next;
                }
                else
                {
                    prev = prev->next;
                }
            }
            current = current->next;
        }
        return head;
     
    }

    //O(n) approch

     Node * removeDuplicates( Node *head) 
    {
        unordered_map<int, int> st;
        int i=0;
        Node *current = head;
        Node *prev = NULL;
        while(current != NULL)
        {
            int value = current->data;
            if(st.find(value) != st.end())
            {
                
                prev->next = current->next;
            }
            else
            {
                st.insert({value, i});
                i++;
                prev = current;
            }
            current = current->next;
        }
        return head;
     
    }