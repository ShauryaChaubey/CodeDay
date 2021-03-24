bool detectLoop(Node* head)
    {
        Node* frwd = head;
        Node* bck = head;
        while(frwd != NULL && bck != NULL && frwd->next != NULL)
        {
            frwd = frwd->next->next;
            bck = bck->next;
            if(frwd == bck)
              return true;
        }
        return false;
    }