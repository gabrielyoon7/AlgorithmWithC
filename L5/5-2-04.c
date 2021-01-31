#include <stdio.h>
#include <conio.h> 
int main()
{
	int i, j;
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
	typedef struct student
	{
		char stud[50];
		int roll_no;
		struct full_name name;
		char sex;
		struct DOB date;
		struct marks score;
	} Student;
	Student stud1[100];
	printf("\nHow many students do you have?");
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		printf("\n\n Enter the %d's student : ", i+1);
		scanf("%s", stud1[i].stud);
		printf("\n Enter the roll number : ");
		scanf("%d", &stud1[i].roll_no);
		printf("\n Enter the name : ");
		scanf("%s %s %s", stud1[i].name.first_name, stud1[i].name.middle_name, stud1[i].name.last_name);
		printf("\n Enter the sex : ");
		scanf("%d", &i);
		scanf("%c", &stud1[i].sex);
		printf("\n Enter the DOB : ");
		scanf("%d %d %d", &stud1[i].date.day, &stud1[i].date.month, &stud1[i].date.year);
		printf("\n Enter the score (eng math cs) : ");
		scanf("%d %d %d", &stud1[i].score.eng, &stud1[i].score.math, &stud1[i].score.cs);
	}
	for (i = 0; i < j; i++) {
		printf("\n ********STUDENT%d'S DETAILS *******", i);
		printf("\n Student = %s", stud1[i].stud);
		printf("\n ROLL No. = %d", stud1[i].roll_no);
		printf("\n NAME = %s %s %s", stud1[i].name.first_name, stud1[i].name.middle_name, stud1[i].name.last_name);
		printf("\n Sex = %c", stud1[i].sex);
		printf("\n DOB = %d - %d - %d", stud1[i].date.day, stud1[i].date.month, stud1[i].date.year);
		printf("\n eng = %d\n math= %d\n cs = %d", stud1[i].score.eng, stud1[i].score.math, stud1[i].score.cs);
	}
	getch();
	return 0;
}
