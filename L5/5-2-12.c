#include <stdio.h>
#include <conio.h>
#include <malloc.h> 
struct full_name
{
	char first_name[20];
	char middle_name[20];
	char last_name[20];
};
struct full_area
{
	char area[20];
	char city[20];
	char state[20];
};
struct employee
{
	int emp_id;
	struct full_name name;
	struct full_area address;
	int age;
	int salary;
	char designation[20];
};

void display(struct show*);
struct employee* ptr_employee[50];
int main()
{
	int i, n, j = 0;
	printf("\n Enter the number of employee : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		ptr_employee[i] = (struct employee*)malloc(sizeof(struct employee));
		printf("\n Enter the data for student %d ", i + 1);
		ptr_employee[i]->emp_id = i;
		printf("\n NAME: ");
		scanf("%s %s %s", ptr_employee[i]->name.first_name, ptr_employee[i]->name.middle_name, ptr_employee[i]->name.last_name);
		printf("\n ADDRESS: ");
		scanf("%s %s %s", ptr_employee[i]->address.area, ptr_employee[i]->address.city, ptr_employee[i]->address.state);
		printf("\n AGE: ");
		scanf("%d", &ptr_employee[i]->age);
		printf("\n SALARY: ");
		scanf("%d", &ptr_employee[i]->salary);
		printf("\n DESIGNATION: ");
		scanf("%s", ptr_employee[i]->designation);
	}
	display(ptr_employee, n);

	getch();
	return 0;
}
void display(struct employee* ptr, int n)
{
	printf("\n DETAILS OF EMPLOYEES");
	for (int i = 0; i < n; i++) {
		printf("\n\n EMPLOYEE NO. = %d", ptr_employee[i]->emp_id + 1);
		printf("\n NAME = %s %s %s", ptr_employee[i]->name.first_name, ptr_employee[i]->name.middle_name, ptr_employee[i]->name.last_name);
		printf("\n ADDRESS = %s %s %s", ptr_employee[i]->address.area, ptr_employee[i]->address.city, ptr_employee[i]->address.state);
		printf("\n AGE = %d", ptr_employee[i]->age);
		printf("\n SALARY = %d", ptr_employee[i]->salary);
		printf("\n DESIGNATION: %s", ptr_employee[i]->designation);

	}
}
