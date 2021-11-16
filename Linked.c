#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *link;
};
struct node *head;

void beginsert();
void lastinsert();
void specinsert();
void display();
void delete();
int count = 0;

void main()
{
 int op=0;
 printf("\n\t\t\tOperation on Linked List");
 while(op!=6)
 {
 printf("\n\nEnter the operation\n 1.Insert at begin \t2.Insert at last \t3.Insert at specific location \t4.Deletion \t5.Dsiplay \t6.Exit : \n");
 scanf("%d",&op);
 
 switch(op)
 {
  case 1 : printf("\nInsertion at begin operation");
           beginsert();
           break;

  case 2 : printf("\nInsertion at last operation");
           lastinsert();   
           break;

  case 3 : printf("\nInsertion at a specific position");
           specinsert();
           break;
 
  case 4 : printf("\nDeletion at a specific position");
           delete();
           break;

  case 5 : printf("\nDisplaying the elements of linked list");
           display();
           break;

  case 6 : printf("\nExiting.......");
           exit(0);
           break;
          
  default : printf("\nInvalid input");
           break; 
 }
 
 }

}

void beginsert()
{
 struct node *ptr;
 int item;
 printf("\nEnter the item to be inserted : ");
 scanf("%d",&item);
 ptr = (struct node*)malloc(sizeof(struct node*));
 ptr->data = item;
 ptr->link = head;
 head = ptr;
 printf("\nNode inserted");
count=count+1;
}

void lastinsert()
{
 struct node *ptr,*temp;
 int item;
 ptr = (struct node*)malloc(sizeof(struct node*));
 printf("\nEnter the item to be inserted : ");
 scanf("%d",&item);
 ptr->data = item;
 if(head==NULL)
 {
   ptr->link = NULL;
   head = ptr;
   printf("\nNode inserted"); 
   count=count+1;
 }
 else
 {
  temp=head;
  while(temp->link!=NULL)
  {
   temp = temp->link;
  }
  temp->link = ptr;
  ptr->link = NULL; 
  printf("\nNode inserted"); 
  count=count+1;
 }

}
void specinsert()
{
 struct node *ptr,*temp;
 int item,loc;
 ptr = (struct node*)malloc(sizeof(struct node*));  
 printf("\nEnter the item  to be inserted : ");
 scanf("%d",&item);
 ptr->data=item;
 printf("\nEnter the location to be inserted : ");
 scanf("%d",&loc);
 temp = head;
 for(int i=2;i<loc;i++)
 {
  temp = temp->link;
 }  
  ptr->link=temp->link;
  temp->link = ptr;
  printf("\nNode inserted");
  count = count +1;
}
 void display()
{ 
 struct node *temp;
 temp = head;
 int i=1;
 for(temp=head;temp!=NULL;temp=temp->link)
 { 
  printf("\nNode %d : %d",i,temp->data);
  i=i+1;
 } 

}
void delete()
{
 struct node *ptrbefore,*ptr;
 int pos;
 printf("\nEnter the position after the node which you want to delete : ");
 scanf("%d",&pos);
 if(pos>count)
 {
  printf("Invalid position. Size of linked list is %d. Enter the position again : ",count); 
  scanf("%d",&pos);
 } 
 ptr = head;
 for(int i=0;i<pos;i++)
 {
  ptrbefore = ptr;
  ptr = ptr->link; 
 }
 ptrbefore->link = ptr->link;
 free(ptr);
 count=count-1;
}












