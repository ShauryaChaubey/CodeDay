ListNode* Solution::mergeKLists(vector<ListNode*> &A) 
{
   priority_queue<int, vector<int>,  greater<int>> q;
   ListNode* start = new ListNode(0);
   ListNode* head = start;
   for(int i=0; i<A.size(); i++)
   {
       ListNode* current = A[i];
       while(current)
       {
           q.push(current->val);
           current = current->next;
       }
   }
   while(!q.empty())
   {
       head->next = new ListNode(q.top());
       q.pop();
       head = head->next;
   }
   return start->next;
}