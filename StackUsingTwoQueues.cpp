void push(struct Queue *q1,struct Queue *q2,int num)
{
    while(!isEmpty(q1))
    {
        int temp = front(q1);
        dequeue(q1);
        enqueue(q2, temp);
    }
    enqueue(q1, num);
    while(!isEmpty(q2))
    {
        int temp = front(q2);
        dequeue(q2);
        enqueue(q1, temp);
    }
}

//Function to pop an element from stack using two queues. 
int pop(struct Queue *q1)
{
    if(isEmpty(q1))
       return -1;
    int temp = front(q1);
    dequeue(q1);
    return temp;
}