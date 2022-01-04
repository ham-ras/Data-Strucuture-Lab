#include<stdio.h>
#include<stdlib.h>
int U[]={1,2,3,4,5,6,7,8,9}
void input();
void output();
void setunion();
void intersection();
void difference();
int a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0};
int main()
{
  int ch,wish;
  
  

}

void input()
{
 int n,x,i;
 printf("Enter the size of the 1st set : ");
 scanf("%d",&n);
 printf("Enter the elements : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&x);
  a[x-1]=1;   
 }
 printf("Enter the size of 2nd set : ");
 scanf("%d",&n);
 printf("Enter the elements : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&x);
  b[x-1]=1;
 }
 printf("\n1st set \n");
 for(i=0;i<9;i++)
 {
  printf("%d",a[i]);
 }

 printf("\n2nd set \n");
 for(i=0;i<9;i++)
 {
  printf("%d",b[i]);
 }

}

void output(int c[])
{
 int i;
 printf("\nSet is ");
 for(i=0;i<9;i++)
 {
  if(c[i!=0])
   printf("%d",i+1);
 }  
}

void setunion()
{ 
 int i,c[10];
 for(i=0;i<9;i++)
 {
  if(a[i]!=b[i])
   c[i]=1;
  else
   c[i]=a[i];   
 }
 for(i=0;i<9;i++)
 {
  printf("%d",c[i]);
 } 
 
 output(c);

}

void intersection()
{
 int i,c[10];
 for(i=0;i<9;i++)
 {
  if(a[i]==b[i])
   c[i]=a[i];
  else
   c[i]=0;
 }
 

}




















