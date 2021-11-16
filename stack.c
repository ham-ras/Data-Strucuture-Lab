#include<stdio.h>
#include<stdlib.h>

void push(int x);
void pop();
void display();
int top = -1;
int stack[100];

void main()
{

  int op = 0,n;
  while(op!=4)
  {
   printf("\n1.Push Operation \t 2.Pop Operation \t 3.Display \t 4.Exit \n\n");
   scanf("%d",&op);
   switch(op)
   {
    case 1 : printf("\nPush Operation");
             printf("\nEnter the element to push : ");
             scanf("%d",&n);
             push(n);
             break;

    case 2 : printf("\nPop Operation"); 
             pop();
             break;
  
    case 3 : printf("Displaying stack ");
             display();
             break;

    case 4 : printf("exiting....");
             exit(0);
             break;
   
    default : printf("Invalid Input");
              break;   

 
   }
  
  } 

}
void push(int x)
{
  if (top >=100)
   printf("Stack overflow"); 
  else
  {
   top = top+1;
   stack[top] = x;
  }

}

void pop()
{
 int data;
 if (top==-1)
  printf("Stack underflow");
 else
 {
  data = stack[top];
  top = top-1;
  printf("\n%d Popped",data); 
 
 } 
 
}

void display()
{
  printf("Displaying the elements of stack\n");
  for(int i=0; i<=top;i++)
  {
    printf("\n%d",stack[i]);
  }
  
}















