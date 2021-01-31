#include <stdio.h>
#include <conio.h> 
int main()
{
	int i, j;
	struct marks
	{
		int eng;
		int math;
		int cs;
	};
	typedef struct student
	{
		char name[30];
		struct marks score;
		char grade;
	} Student;
	Student stud1[100];
	printf("\nHow many students do you have?");
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		printf("\n\nStudent no.%d\n Enter the name : ", i+1);
		scanf("%s", stud1[i].name);
		printf("\n Enter the score (eng math cs) : ");
		scanf("%d %d %d", &stud1[i].score.eng, &stud1[i].score.math, &stud1[i].score.cs);
		if (stud1[i].score.eng + stud1[i].score.math + stud1[i].score.cs > 90 * 3)
			stud1[i].grade = 'A';
		else if (stud1[i].score.eng + stud1[i].score.math + stud1[i].score.cs > 80 * 3)
			stud1[i].grade = 'B';
		else if (stud1[i].score.eng + stud1[i].score.math + stud1[i].score.cs > 70 * 3)
			stud1[i].grade = 'C';
		else
			stud1[i].grade = 'D';
	}
	for (i = 0; i < j; i++) {
		printf("\n\n ********STUDENT%d'S DETAILS *******", i+1);
		printf("\n NAME = %s", stud1[i].name);
		printf("\n eng = %d\n math= %d\n cs = %d", stud1[i].score.eng, stud1[i].score.math, stud1[i].score.cs);
		printf("\n grade = %c", stud1[i].grade);
	}
	for (i = 0; i < j; i++) {
		if (stud1[i].score.eng + stud1[i].score.math + stud1[i].score.cs < 40 * 3)
			printf("\nstudent no. %d is fool.", i+1);
	}
	getch();
	return 0;
}
