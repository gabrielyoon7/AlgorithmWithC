#include <stdio.h> 
#include <stdlib.h>
#include <conio.h> 
#include <malloc.h> 
struct stack_student {
	int data;
	char name[20];
	char course[20];
	int fees;
	struct stack_student* next;
};
struct stack_student* top = NULL;
struct stack_student* push(struct stack_student*, int);
struct stack_student* display(struct stack_student*);
struct stack_student* pop(struct stack_student*);
int peek(struct stack_student*);

int main(int argc, char* argv[]) {
	int val, option;
	do
	{
		printf("\n *****MAIN MENU*****");
		printf("\n 1. PUSH");
		printf("\n 2. POP");
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n Enter your option: ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("\n Enter the data for the student ");
			printf("\n ROLL NO.: ");
			scanf("%d", &val);
			top = push(top, val);
			printf("\n");
			break;
		case 2:
			top = pop(top);
			break;
		case 3:
			val = peek(top);
			if (val != -1)
				printf("\n The value at the top of stack is: %d", val);
			else
				printf("\n STACK IS EMPTY");
			break;
		case 4:
			top = display(top);
			break;
		}
	} while (option != 5);
	return 0;
}
struct stack_student* push(struct stack_student* top, int val)//create a node to left side.
{
	int j = 0;
	struct stack_student* ptr;
	ptr = (struct stack_student*)malloc(sizeof(struct stack_student));
	ptr->data = val;

	printf(" NAME: ");
	scanf("%d", &j);
	gets(ptr->name);
	printf(" COURSE: ");
	scanf("%d", &j);
	gets(ptr->course);
	printf(" FEES: ");
	scanf("%d", &ptr->fees);
	if (top == NULL)
	{
		ptr->next = NULL;
		top = ptr;
	}
	else
	{
		ptr->next = top;
		top = ptr;
	}
	return top;
}
struct stack_student* display(struct stack_student* top)
{
	struct stack_student* ptr;
	ptr = top;
	if (top == NULL)
		printf("\n STACK IS EMPTY");
	else
	{
		while (ptr != NULL)
		{
			printf("\n\n\n DETAILS OF STUDENT");
			printf("\n ROLL NO. = %d", ptr->data);
			printf("\n NAME = %s", ptr->name);
			printf("\n COURSE = %s ", ptr->course);
			printf("\n FEES = %d\n\n", ptr->fees);
			ptr = ptr->next;
		}
	}
	return top;
}
struct stack_student* pop(struct stack_student* top)
{
	struct stack_student* ptr;
	ptr = top;
	if (top == NULL)
		printf("\n STACK UNDERFLOW");
	else
	{
		top = top->next;
		printf("\n The value being deleted is: %d", ptr->data);
		free(ptr);
	}
	return top;
}
int peek(struct stack_student* top)
{
	if (top == NULL)
		return -1;
	else
		return top->data;
}
