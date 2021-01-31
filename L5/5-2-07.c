#include <stdio.h>
#include <string.h>
typedef struct info {
	char name[20];
	char phone_num[20];
	int age;
}employee;
int main()
{
	int i, j;
	employee person[100];
	printf("\nHow many people? : ");
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		printf("\nWorker no. %d", i+1);
		printf("\nname : ");
		scanf("%s", person[i].name);
		printf("phone number : ");
		scanf("%s", person[i].phone_num);
		printf("age : ");
		scanf("%d", &person[i].age);
		printf("\n");
	}
	for (i = 0; i < j; i++) {
		printf("\nWorker no. %d", i+1);
		printf("\nname : %s", person[i].name);
		printf("\nphone number : %s", person[i].phone_num);
		printf("\nage : %d", person[i].age);
		printf("\n");
	}
	getch();
	return 0;
}
