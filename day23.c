#include<stdio.h>
#include<stdlib.h>
struct ListNode
{	
	int data;
	struct ListNode *next;
};

void insert(struct ListNode **head,int x)
{
	struct ListNode *newnode= malloc(sizeof(struct ListNode));
	newnode->data=x;
	newnode->next=*head;
	*head=newnode;
}
void sortList(struct ListNode** head){
    struct ListNode *i=*head,*j=NULL,*temp=*head;
    int t,k=1;
    if(*head==NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        while(i!=NULL)
        {
            j=i->next;
            while(j!=NULL)
            {
            if(i->data>j->data)
            {
            t=i->data;
            i->data=j->data;
            j->data=t;
            }
            j=j->next;
            }
            i=i->next;
        }
    }
    printf("\n\nThe sorted linked list is: ");
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
    
}

void main()
{
	struct ListNode *head=NULL;
	int n;
	while(1)
	{
		printf("\nEnter a value to insert (Press -1 to stop): ");
		scanf("%d",&n);
	
		if(n==-1)
		{
			break;
		}
		else
		insert(&head,n);
	}
	
	struct ListNode *temp = head;	
    printf("\n\nThe linked list is: ");
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
    sortList(&head);

}