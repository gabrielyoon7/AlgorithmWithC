#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, arr1[3][3], arr2[3][3], arr3[3][3];
	srand(time(NULL));
	printf("\narr1\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			arr1[i][j] = rand() % 100 + 0;
			printf("\t%d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\narr2\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			arr2[i][j] = rand() % 100 + 0;
			printf("\t%d", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\narr1+arr2\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("\t%d", arr3[i][j]);
		}
		printf("\n");
	}


	return 0;
}
