#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <malloc.h> 
struct node
{
	int data;
	struct node* next;
};
struct node* start = NULL;
struct node* create_ll(struct node*);
struct node* display(struct node*);
struct node* delete_beg(struct node*);
struct node* delete_list(struct node*);
struct node* sort_list(struct node*);
struct node* sort_checker(struct node*);
int main(int argc, char* argv[]) {
	int option;
	do
	{
		printf("\n\n * ****MAIN MENU * ****");
		printf("\n 1: Create a list");
		printf("\n 2: Display the list");
		printf("\n 11: Delete the entire list");
		printf("\n 11: Delete the entire list");
		printf("\n 12: Sort the list");
		printf("\n 13: EXIT");
		printf("\n 14: Write a program that prints whether the given linked list is sorted(in ascending order) or not.");
		printf("\n\n Enter your option : ");
		scanf(" %d", &option);
		switch (option)
		{
		case 1: start = create_ll(start); printf("\n LINKED LIST CREATED"); break;
		case 2: start = display(start); break;
		case 12: start = sort_list(start); break;
		case 11: start = delete_list(start); printf("\n LINKED LIST DELETED"); break;
		case 14: start = sort_checker(start); break;
		}
	} while (option != 13);
	getch();
	return 0;
}
struct node* create_ll(struct node* start)
{
	struct node* new_node, * ptr;
	int num;
	printf("\n Enter -1 to end");
	printf("\n Enter the data : ");
	scanf(" %d", &num);
	while (num != -1)
	{
		new_node = (struct node*)malloc(sizeof(struct node)); //allocation to the memory
		new_node->data = num;
		if (start == NULL)
		{
			new_node->next = NULL;
			start = new_node;
		}
		else
		{
			ptr = start;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new_node; //deleting null of before
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
	free(ptr);
	return start;
}
struct node* delete_list(struct node* start)
{
	struct node* ptr;
	if (start != NULL) {
		ptr = start;
		while (ptr != NULL)
		{
			printf("\n %d is to be deleted next", ptr->data);
			start = delete_beg(ptr);
			ptr = start;
		}
	}

	return start;
}
struct node* sort_list(struct node* start)
{
	struct node* ptr1, * ptr2; int temp;
	ptr1 = start;
	while (ptr1->next != NULL)
	{
		ptr2 = ptr1->next;
		while (ptr2 != NULL)
		{
			if (ptr1->data > ptr2->data)
			{
				temp = ptr1->data;
				ptr1->data = ptr2->data;
				ptr2->data = temp;
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	return start; // Had to be added
}
struct node* sort_checker(struct node* start)
{
	struct node* ptr1, * ptr2; int temp;
	ptr1 = start;
	while (ptr1->next != NULL)
	{
		ptr2 = ptr1->next;
		while (ptr2 != NULL)
		{
			if (ptr1->data > ptr2->data)
			{
				printf("\n it is not sorted.");
				return start;
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	printf("\nIt is sorted");
	return start; // Had to be added
}


