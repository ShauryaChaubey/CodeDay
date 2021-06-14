void push(stack<int>& s, int a)
{
	s.push(a);
}

bool isFull(stack<int>& s,int n)
{
	if(s.size() == n)
	  return true;
	return false;
}

bool isEmpty(stack<int>& s)
{
	if(s.empty())
	  return true;
	return false;
}

int pop(stack<int>& s)
{
    int temp = s.top();
	s.pop();
	return temp;
}

int getMin(stack<int>& s)
{
    int Min = 10001;
	while(!s.empty())
	{
	    int temp = s.top();
	    Min = min(temp,Min);
	    s.pop();
	}
	return Min;
}

//OR

void push(stack<int>& s, int a){
// Your code goes here
if(s.size()==0)
s.push(a);
else
{
int p=s.top();
s.pop();
int q=max(a,p);
int r=min(a,p);
s.push(q);
s.push(r);
}
}

bool isFull(stack<int>& s,int n){
// Your code goes here
if(s.size()==n)
return true;
else
return false;
}

bool isEmpty(stack<int>& s){
// Your code goes here
if(s.size()==0)
return true;
else
return false;
}

int pop(stack<int>& s){
// Your code goes here
if(s.size()!=0)
{int k=s.top();
s.pop();
return k;
}
return -1;



}

int getMin(stack<int>& s){
// Your code goes here
return s.top();

}