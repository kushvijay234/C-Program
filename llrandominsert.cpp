#include <stdio.h>
#include <stdlib.h>

void randominsert(int);
void create(int);

struct node
{
	int data;
	struct node *next;
};

struct node *head;

int main()
{
	int choice,item,loc;
	do 
	{
		printf("\n Enter the item which you want to insert ? \n");
		scanf ("%d", &item);
		if(head == NULL)
		{
			create(item);	
		}	
		else {
			randominsert (item);
		}
		printf ("\n Press 0 to insert more ? \n");
		scanf("%d", &choice);
	}
	while (choice == 0);
}

void create (int item)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node *));
	if (ptr == NULL)
	{
		printf (" \n OVERFLOW \n");
	}
	else {
		ptr -> data = item;
		ptr -> next = head;
		head = ptr;
		printf ("\n Node Inserted \n");
	}
}

void randominsert (int item)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node *));
	struct node *temp;
	int i, loc;
	if (ptr==NULL)
	{
		printf ("\n OVERFLOW");
	} else 
	{
		printf ("Enter the location");
		scanf("%d", &loc);
		ptr -> data=item;
		temp = head;
		for (i=0; i<loc; i++)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				printf("\n can't insert \n");
				return;
			}
		}
		ptr -> next = temp -> next;
		temp -> next = ptr;
		printf("\n Node inserted");
	}
}
