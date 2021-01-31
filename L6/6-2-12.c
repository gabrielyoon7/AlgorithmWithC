#include <stdio.h> 
#include <conio.h>
#include <malloc.h>
struct node
{
	struct node* next;
	int data;
	struct node* prev;
};
struct node* start = NULL;
struct node* start2 = NULL;
struct node* create_ll(struct node*);
struct node* display(struct node*);
struct node* delete_beg(struct node*);
struct node* delete_list(struct node*);
struct node* create_ll2(struct node*);
struct node* display2(struct node*);
struct node* concatenate(struct node*);
int main()
{
	int option;
	do
	{
		printf("\n\n *****MAIN MENU *****");
		printf("\n 1: Create a list");
		printf("\n 2: Display the list");
		printf("\n 11: Delete the entire list");
		printf("\n 12: EXIT");
		printf("\n 13: Create a list2");
		printf("\n 14: Display the list2");
		printf("\n 15: Concatenate both of them");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		switch (option)
		{
		case 1: start = create_ll(start); printf("\n DOUBLY LINKED LIST CREATED"); break;
		case 2: start = display(start); break;
		case 11: start = delete_list(start); printf("\n DOUBLY LINKED LIST DELETED"); break;
		case 13: start2 = create_ll(start2); printf("\n DOUBLY LINKED LIST CREATED"); break;
		case 14: start2 = display(start2); break;
		case 15: start = display(start, start2); break;
		}
	} while (option != 12);
	getch();
	return 0;
}
struct node* create_ll(struct node* start)
{
	struct node* new_node, * ptr;
	int num;
	printf("\n Enter -1 to end");
	printf("\n Enter the data : ");
	scanf("%d", &num);
	while (num != -1)
	{
		if (start == NULL)
		{
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->prev = NULL;
			new_node->data = num;
			new_node->next = NULL;
			start = new_node;
		}
		else
		{
			ptr = start;
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->data = num;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new_node;
			new_node->prev = ptr;
			new_node->next = NULL;
		}
		printf("\n Enter the data : ");
		scanf("%d", &num);
	}
	return start;
}
struct node* display(struct node* start)
{
	struct node* ptr;
	ptr = start;
	while (ptr != NULL)
	{
		printf("\t %d", ptr->data);
		ptr = ptr->next;
	}
	return start;
}
struct node* delete_beg(struct node* start)
{
	struct node* ptr;
	ptr = start;
	start = start->next;
	start->prev = NULL;
	free(ptr);
	return start;
}
struct node* delete_list(struct node* start)
{
	while (start != NULL)
		start = delete_beg(start);
	return start;
}

struct node* create_ll2(struct node* start2)
{
	struct node* new_node, * ptr;
	int num;
	printf("\n Enter -1 to end");
	printf("\n Enter the data : ");
	scanf("%d", &num);
	while (num != -1)
	{
		if (start2 == NULL)
		{
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->prev = NULL;
			new_node->data = num;
			new_node->next = NULL;
			start2 = new_node;
		}
		else
		{
			ptr = start2;
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->data = num;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new_node;
			new_node->prev = ptr;
			new_node->next = NULL;
		}
		printf("\n Enter the data : ");
		scanf("%d", &num);
	}
	return start2;
}
struct node* display2(struct node* start2)
{
	struct node* ptr;
	ptr = start2;
	while (ptr != NULL)
	{
		printf("\t %d", ptr->data);
		ptr = ptr->next;
	}
	return start2;
}
struct node* concatenate(struct node* start, struct node* start2)
{
	struct node* ptr, *ptr2;
	ptr = start;
	ptr2 = start2;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = ptr2;
	ptr2->prev = ptr;
	ptr = start;
	while (ptr != NULL)
	{
		printf("\t %d", ptr->data);
		ptr = ptr->next;
	}
	return start;
}