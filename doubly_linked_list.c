#include<stdio.h>
#include<stdlib.h>

void insert_begin();
void insert_last();
void insert_middle();
void delete_begin();
void delete_middle();
void delete_last();
void display();

struct node
{
  int data;
  struct node *previous, *next;
};

struct node *head = NULL;

nt op=0;
 printf("\n\t\t\tOperation on Doubly Linked List");
 while(op!=8)
 {
 printf("\n\nEnter the operation\n 1.Insert at begin \t2.Insert at last \t3.Insert at specific location \t4.Deletion at specififed position \t5.Deletion at begininig \t6.Deletion at last position \t7.Dsiplay \t8.Exit : \n");
 scanf("%d",&op);
 
 switch(op)
 {
  case 1 : printf("\nInsertion at begin operation");
           insert_begin();
           break;

  case 2 : printf("\nInsertion at last operation");
           insert_last();   
           break;

  case 3 : printf("\nInsertion at a specific position");
           insert_middle();
           break;
 
  case 4 : printf("\nDeletion at a specific position");
           delete_middle();
           break;

  case 5 : printf("\nDeletion at begining");
           delete_begin();
           break;

  case 6 : printf("\nDeletion at last");
           delete_last();
           break;

  case 7 : printf("\nDisplaying the elements of linked list");
           display();
           break;

  case 8 : printf("\nExiting.......");
           exit(0);
           break;
          
  default : printf("\nInvalid input");
           break; 
 }
 
 }

}


void insert_begin()
{
 int data;
 struct node *ptr;
 ptr = (struct node*)malloc(sizeof(struct node*));
 printf("\nEnter the data to be inserted : ");
 scanf("%d",data);
 ptr->data = data;
 ptr->previous = NULL;
 if(head==NULL)
 {
  head=ptr;
  ptr->next=NULL;
 }
 else
 {
  ptr->next=head;
  head=ptr;
  
 }
}

void insert_last()
{
 int data;
 struct node *ptr,*temp;
 ptr = (struct node*)malloc(sizeof(struct node*));
 printf("\nEnter the data to be inserted : ");
 scanf("%d",data);
 ptr->data=data;
 if(head==NULL)
 {
  head=ptr;
  ptr->next=NULL;
  ptr->previous=NULL;
 }
 else
 {
  temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }  
  temp->next=ptr;
  ptr->previous=temp; 
  ptr->next=NULL;
 }

}

void insert_middle()
{
 int data,pos;
 struct node *ptr,*temp1,*temp2;
 ptr = (struct node*)malloc(sizeof(struct node*));
 printf("\nEnter the data to be inserted : ");
 scanf("%d",data);
 ptr->data=data;
 printf("\nEnter the position after node to be inserted : ");
 scanf("%d",pos);
 temp1=head;
 for(int i=1;i<pos;i++)
 {
  temp1=temp1->next;
 }
 temp2=temp1->next;
 ptr->next = temp->next;
 ptr->previous = temp1;
 temp1->next=ptr;
 temp2->previous = ptr; 
}

void delete_begin()
{
 struct node *temp;
 temp=head;
 head=temp->next;
 free(temp);
}

void delete_last()
{
 struct node *temp1,*temp2;
 while(temp->next!=NULL)
 {
  temp1=temp1->next;
 }
 temp2=temp1->previous;
 temp2->next=NULL;
}


























