#include<stdio.h>
void push(int s[],top)
{
   
  if(top=n-1)
    print(" Stack is full);
   else
   {
    scanf("%d",s[top]);
    top+=top;
   }
 }
 void pop(int s[], top)
{
    if (top=-1)
      printf("stack empty");
    else
    {
      printf("the element popped is %d", s[top]);
      top=top-1;
    }
}
 void display(int s[],top)
          {
  int i;
  for(i=s[top-1];i<s[top];i--)
      printf("Element in the stack is %d",s[top]
int main()
{
int s[],top;
push(s,top);
pop(s,top);
  display(s,top);
}
