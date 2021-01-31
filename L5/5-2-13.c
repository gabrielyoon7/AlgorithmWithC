#include <stdio.h>
#include <conio.h>
#include <malloc.h> 
typedef struct ddmmyy {
	int day;
	int month;
	int year;
} Date;
void display(struct ddmmyy* ptr_date) {
	printf("%d %d %d", ptr_date->day, ptr_date->month, ptr_date->year);
	if (ptr_date->month == 1 || ptr_date->month == 3 || ptr_date->month == 5 || ptr_date->month == 7 || ptr_date->month == 8 || ptr_date->month == 10 || ptr_date->month == 12)
		printf("\n%d's month has 31th day", ptr_date->month);
	else
		printf("\n%d's month has not 31th day", ptr_date->month);
	if (((ptr_date->year % 4 == 0) && (ptr_date->year % 100 != 0)) || (ptr_date->year % 400 == 0))
		printf("\n%d is leap year", ptr_date->year);
	else
		printf("\n%d is not leap year", ptr_date->year);
}

void reading(struct ddmmyy*ptr_date) {
	printf("\ninput dd mm yy: ");
	scanf("%d %d %d", &ptr_date->day, &ptr_date->month, &ptr_date->year);
}
struct ddmmyy* ptr_date;

int main(void) {
	ptr_date= (struct ddmmyy*)malloc(sizeof(struct ddmmyy));
	reading(ptr_date);
	display(ptr_date);
}