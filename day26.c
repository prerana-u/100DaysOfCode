#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    
}*head;

void display()
{
	struct Node *temp=head;
	if(head==NULL)
	{
	printf("\n\nLinked List is empty!");
	}
	else
	{
	while(temp!=NULL)
	{
	printf("%d -> ",temp->data);
	temp=temp->next;
	}
	printf("NULL");
	} 
}

void insert(int x)
 {

	struct Node *newnode= (struct Node*) malloc(sizeof(struct Node));
	
	newnode->data=x;
	if(head==NULL)
	{
	newnode->next=NULL;
	head=newnode;
	}
	else
	{
	newnode->next=head;
	head=newnode;
	}
	display();
	
 }
 


struct Node* deleteDuplicates(){
 
    struct Node *temp=head, *i=NULL;

    while(temp!=NULL)
    {
        i=temp->next;
        while(i!=NULL)
        {
            if(temp->data==i->data)
            {
                temp->next=i->next;
               
            }
             i=i->next;
        }
        temp=temp->next;
    }
   display();
}


void main()
{
	int x;
    while(1)
	{
	printf("\n\nEnter n values: ");
	scanf("%d",&x);
	printf("\n");
	if(x==-1)
	{
	display();
	break;
	}
	else
	insert(x);
	}
	printf("\n\nThe original list is: ");
	display();
	printf("\n\nThe list after deleting duplicates is: ");
	deleteDuplicates();

}