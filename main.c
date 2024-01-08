/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node *head=NULL;
void create(struct node *);
void display(struct node *);
void insertatbeg(struct node *);
void insertatlast(struct node *);
void insertatpos(struct node *);
int main()
{
	int n;
	while(1)
	{
		    printf("\n press 1:create 2:display 3:insertatbeg 4:insertatlast 5:insertatpos 0:exit\n");
		    printf("enter your choice");
		    scanf("%d",&n);
		    switch(n)
		    {
		    	case 1:create(head);break;
		    	case 2:display(head);break;
		    	case 3:insertatbeg(head);break;
		    	case 4:insertatlast(head);break;
		    	case 5:insertatpos(head);break;
		    	case 0:exit(1);break;
		    	default :printf("wrong choice");
			}
		
	}
	return 0;
}
void create(struct node *ptr)
{ 
  int data;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter data value");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  if(head==NULL)
  {
  	head=temp;
  }
  else
  {
  	ptr=head;
  	while(ptr->next!=NULL)
  	{
  		ptr=ptr->next;
	  }
	  ptr->next=temp;
  }
}
void display(struct node *ptr)
{
	if(head==NULL)
	{
		printf("...empty...");
	}
	else
	{
		printf("\n print link list is...");
		while(ptr!=NULL)
		{
			printf("%d  ",ptr->info);
			ptr=ptr->next;
		}
	}
}
void insertatbeg(struct node *ptr)
{
	int data;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter data value");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  if(head==NULL)
  {
  	head=temp;
  }
  else
  {
  	temp->next=ptr;
  	head=temp;
  }
  printf(" node insert at first position successfuly... \n");
}
 void insertatlast(struct node *ptr)
 {
   int data;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter data value");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  if(head==NULL)
  {
  	head=temp;
  }
  else
  {
  	ptr=head;
  	while(ptr->next!=NULL)
  	{
  		ptr=ptr->next;
	  }
	  ptr->next=temp;
  }
  printf("node insert at last position successfuly ....\n");
}
void insertatpos(struct node *ptr)
{
 int data,i,pos;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter data value");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  printf("enter position at which you want to insert\n");
  scanf("%d",&pos);
  i=1;
  while(i<pos-1)
  {
  	ptr=ptr->next;
  	i++;
	  }	
	  temp->next=ptr->next;
	  ptr->next=temp;
	  printf("node insert at given position successfuly.....");
}
