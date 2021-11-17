#include<stdio.h>
#include<stdlib.h>
int queue[10];

void enqueue(int x);
void dequeue();
void display();
int front=-1;
int rear=-1;

void main()
{
  int op=0;
  int num; 
  while(op!=4)
  {
   printf("\nQueue Operation\n\n1. Enqueue \t2.Dequeue \t3.Display \t4.Exit\n");
   scanf("%d",&op);
   switch(op)
   {
    case 1 : printf("\nEnqueue Operation");
             printf("\nEnter the data to be inserted into the queue : ");
             scanf("%d",&num);
             enqueue(num);
             break;

    case 2 : printf("\nDequeue Operation");
             dequeue();
             break;

    case 3 : printf("\nDisplaying elements");
             display();
             break;

    case 4 : printf("Exiting....");
             exit(0);
             break;
 
    default : printf("Invalid input");
              break;          
   }

  }

}

void enqueue(int x)
{
 if (rear>=10)
  printf("\nQueue overflow");
 else if(rear==-1 && front==-1)
 {
  rear = rear+1;
  front=front+1;
  queue[rear] = x;
  printf("%d inserted to queue",x); 
 } 
 else
 {
  rear = rear+1;
  queue[rear] = x;
  printf("%d inserted to queue",x); 
 }
}

void dequeue()
{
 int data;
 if(front==-1 || front>rear)
 {
  printf("\nQueue underflow");
 }
 else
 {
  data = queue[front];
  front=front+1;
  printf("\n%d dequeued",data);
 } 

}

void display()
{
 int i;
 for(i=front;i<=rear;i++)
 {
  printf("\n%d",queue[i]);
 }

}











