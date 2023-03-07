#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    
}*head;

void insert(int);
void display();

void reverseList()
    {
        struct Node* prev = NULL;
        struct Node* current = head;
        struct Node* next = NULL;
        while (current != NULL) {
           
            next = current->next;
     
            current->next = prev;
     
            prev = current;
            current = next;
        }
        head = prev;
        printf("\n\nThe reversed linked list is: ");
        display();
        
    }

//{ Driver Code Starts.

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
	reverseList();

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
