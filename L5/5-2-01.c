#include <stdio.h>
#include <conio.h> 
int main()
{
	int i;
	struct DOB
	{
		int day;
		int month;
		int year;
	};
	struct full_name
	{
		char first_name[20];
		char middle_name[20];
		char last_name[20];
	};
	struct marks
	{
		int eng;
		int math;
		int cs;
	};
	struct student
	{
		char stud[50];
		int roll_no;
		struct full_name name;
		char sex;
		struct DOB date;
		struct marks score;
	};
	struct student stud1;

	printf("\n Enter the student : ");
	scanf("%s", stud1.stud);
	printf("\n Enter the roll number : ");
	scanf("%d", &stud1.roll_no);
	printf("\n Enter the name : ");
	scanf("%s %s %s", stud1.name.first_name, stud1.name.middle_name, stud1.name.last_name);
	printf("\n Enter the sex : ");
	scanf("%d", &i);
	scanf("%c", &stud1.sex);
	printf("\n Enter the DOB : ");
	scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
	printf("\n Enter the score (eng math cs) : ");
	scanf("%d %d %d", &stud1.score.eng, &stud1.score.math, &stud1.score.cs);


	printf("\n ********STUDENT'S DETAILS *******");
	printf("\n Student = %s", stud1.stud);
	printf("\n ROLL No. = %d", stud1.roll_no);
	printf("\n NAME = %s %s %s", stud1.name.first_name, stud1.name.middle_name, stud1.name.last_name);
	printf("\n Sex = %c", stud1.sex);
	printf("\n DOB = %d - %d - %d", stud1.date.day, stud1.date.month, stud1.date.year);
	printf("\n eng = %d\n math= %d\n cs = %d", stud1.score.eng, stud1.score.math, stud1.score.cs);
	getch();
	return 0;
}
