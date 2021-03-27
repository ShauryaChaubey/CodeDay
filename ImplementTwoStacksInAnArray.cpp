void twoStacks :: push1(int x)
{
    arr[++top1] = x;

}
void twoStacks ::push2(int x)
{
    arr[--top2] = x;

}
int twoStacks ::pop1()
{
    if(top1 == -1)
      return -1;
    return arr[top1--];

}
int twoStacks :: pop2()
{
    if(top2 == size)
      return -1;
    return arr[top2++];

}