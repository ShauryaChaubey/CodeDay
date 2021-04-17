//O(n^2) Approch

#include<bits/stdc++.h>
using namespace std;

//Creation of Node class for Linked List
class Node{
public:
	int data;
	Node*next;
	Node(int d){
		data = d;
		next = NULL;
	}
};

void print(Node *root)
{
    Node *temp = root;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = tem->next;
    }
}

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

    int main()
    {
        int T;
        cin >> T;
        for(int t=0;t<T;t++)
        {
            int n;
            cin >> n;
            struct Node *head = NULL;
            struct Node *temp = head;

            for(int i=0;i<n;i++)
            {
                int data;
                cin >> data;
                if(head == NULL)
                {
                    head = temp = new Node(data);
                }
                else
                {
                    temp->nxt = new Node(data);
                    temp = temp->next;
                }
            }

            Solution obj;
            Node *res = obj.removeDuplicates(head);
            print(res);
            cout << endl;
        }
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
                prev->next = current->next;
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