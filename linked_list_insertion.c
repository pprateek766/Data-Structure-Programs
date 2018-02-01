#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node * Insert(struct node *start,int data);
void display(struct node *);
int main()
{
	struct node *start = NULL;
	start = Insert(start,2); // Insert element to the list
	start = Insert(start,4);
	start = Insert(start,6);
	start = Insert(start,8);
	start = Insert(start,10);
	display(start);// Display list elements
}
struct node * Insert(struct node *start,int data)
{
	struct node *ptr,*temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	if(start == NULL)// In Case of first node
	{
		temp->next =NULL;
		start = temp;
	}
	else 
	{
		ptr = start;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next =temp;
		temp->next = NULL;
	}
	return start;
}
void display(struct node *start)
{
	printf("\n Linked List is : ");
	struct node *ptr = start;
	while(ptr != NULL)// Traverse upto last node of list
	{
		printf("%d->",ptr->data);
		ptr = ptr->next;// moving pointer to the next node on list
	}
}
