#include <stdio.h>
#include <stdlib.h>

void lastinsert(int);

struct node 
{
	int data;
	struct node *next;
};

struct node *head;

void lastinsert(int item)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *temp;
	if (ptr == NULL)
	{
		printf("\n OVERFLOW");
	} else {
		ptr->data = item;
		if (head == NULL)
		{
			head = ptr;
			printf("\n Node Inserted");
		} else {
			temp = head;
			while (temp -> next!= NULL) 
			{
				temp = temp -> next;
			}
			temp -> next = ptr;
			ptr -> next = NULL;
				printf("\n Node Inserted");
		}
	}
}

int main() 
{
	int choice, item;
	do 
	{
		printf("\n Enter the item which you want to insert ? \n");
		scanf("%d", &item);
		printf("\n Press 0 to insert more ? \n");
		scanf("%d", &choice);
	} while (choice == 0);
}



