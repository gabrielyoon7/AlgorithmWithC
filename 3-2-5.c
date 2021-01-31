#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, marks[10][10], sum=0;
	double avg;
	srand(time(NULL));


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			marks[i][j] = rand() % 100 + 0;
	}

	printf("\n 5.	Write a program to compute the sum and mean of the elements of a two-dimensional array.\n ");
	for (i = 0; i < 10; i++)
	{
		printf("\n");
		for (j = 0; j < 10; j++)
			printf("\t %d", marks[i][j]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			sum+=marks[i][j];
	}
	avg = sum / 100.0;
	printf("\n\tsum is %d", sum);
	printf("\n\tavg is %.2f", avg);

	return 0;
}
