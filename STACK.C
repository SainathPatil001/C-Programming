#include<stdio.h>
#include<conio.h>
#define max 50
void push();
void pop();
void display();
int menu();
int stack[max];
int top=0;
void main()
{
int ch;
clrscr();
do
 {
  ch=menu();
  switch(ch)
  {
   case1:push();
   break;
   case2:pop();
   break;
   case3:display();
   break;
   case4:exit();
   default:
   printf("Wrong choice:\n");
   }
   }
   while(1)
   }
   int menu();
   {
   int ch;
   printf("This is a Stack");
   printf("enter your choice:\n");
   scanf("%d",&ch);
   return ch;
   }
   void push()
   {
   int item;
   if(top==max)
   printf("stack is full");
   else
   {
   printf("enter the element to be push");
   scanf("%d",&fitem);
   printf("%d has been pushed at %d",item,top);
   stack[top]=item;
   top++;
   }
   }
   void pop()
   {
   if(top==-1)
   printf("underflow");
   else
   {
   top--;
   printf("Item has been popped");
   }
   }
   void display()
   {
   for(i=0;i<=top;i++)
   {
   printf("stack of[i]");
   scanf("%d",&i);
   }
   }