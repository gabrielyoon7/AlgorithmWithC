#include <stdio.h>
#include <conio.h>
#include <malloc.h> 
struct employee
{
	int id_num;
	char name[20];
	char phone_num[20];
	int age;
};
void display(struct show*);
struct employee* ptr_stud[10];
int main()
{
	int i, n, j = 0;
	printf("\n Enter the number of students : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		ptr_stud[i] = (struct employee*)malloc(sizeof(struct employee));
		printf("\n Enter the data for student %d ", i + 1);
		ptr_stud[i]->id_num = i;
		printf("\n NAME: ");
		scanf("%d", &j);
		gets(ptr_stud[i]->name);
		printf("\n PHONE NUMBER: ");
		scanf("%s", ptr_stud[i]->phone_num);
		printf("\n AGE: ");
		scanf("%d", &ptr_stud[i]->age);
	}
	printf("\n DETAILS OF EMPLOYEES");

	display(ptr_stud, n);

	getch();
	return 0;
}
void display(struct employee* ptr, int n)
{
	for (int i = 0; i < n; i++) {
		printf("\n EMPLOYEE NO. = %d", ptr_stud[i]->id_num + 1);
		printf("\n NAME = %s", ptr_stud[i]->name);
		printf("\n PHONE NUMBER = %s", ptr_stud[i]->phone_num);
		printf("\n AGE = %d", ptr_stud[i]->age);

	}
}
