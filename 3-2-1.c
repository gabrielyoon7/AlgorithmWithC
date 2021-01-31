#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, marks[20][5], sum, counter_idiots=0;
	double avg;
	srand(time(NULL));
	printf("\nmaking students\' scores...\n ");

	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 5; j++)
			marks[i][j]=rand()%100+0;
	}

	printf("\n (a) find the average marks obtained in each subject\n ");
	for (i = 0; i < 20; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
			sum += marks[i][j];
		avg=sum/5.0;
		printf("\t student%d's avg : %.1f",i, avg);
		printf("\n");
	}

	printf("\n (b) find the average marks obtained by every student.\n ");
	for (j = 0; j < 5; j++)
	{

		sum = 0;
		for (i = 0; i < 20; i++)
			sum += marks[i][j];
		avg = sum / 20.0;
		printf("\t subject%d's avg : %.1f", j, avg);
		printf("\n");
	}

	printf("\n (c)	find the number of students who have scored below 50 in their average.\n ");
	for (i = 0; i < 20; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++) 
			sum += marks[i][j];
		avg = sum / 5.0;
		if (avg < 50)
			counter_idiots++;
	}
	printf("\t%d students are idiots.\n", counter_idiots);

	printf("\n (d) display the scores obtained by every students\n ");
	for (i = 0; i < 20; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf("\t %d", marks[i][j]);
	}
	return 0;
}
